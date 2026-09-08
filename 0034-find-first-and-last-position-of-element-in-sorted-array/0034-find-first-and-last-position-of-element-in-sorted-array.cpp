class Solution {
public:
    vector<int> searchRange(vector<int>& a, int k) {
        //int c = count(a.begin(), a.end(), k); best for non sorted vectors but O(N)
        //int c = upper_bound(a.begin(), a.end(), x) - lower_bound(a.begin(), a.end(), x); for sorted vec , O(LogN)
        //ABOVE BOTH ARE FOR COUNT BUT I DONT NEED COUNT WHEN I HAVE BOUNDS DIRECTLY 
        int l = lower_bound(a.begin(),a.end(),k) - a.begin(); //bound only gives iterator , so to give idices we subtract with begin
        int h = upper_bound(a.begin(),a.end(),k) - a.begin() - 1; //-1 is kept coz upper bound represents position after last occurrence
        if (l == a.size() || a[l]!=k ){
            return {-1,-1};
        }
        return {l,h};
    }
};