class Solution {
public:
    int missingNumber(vector<int>& a) {
        int s=0,n=a.size();
        for(int i :a){
            s+=i;
        }
        return n*(n+1)/2 - s;
    }
};