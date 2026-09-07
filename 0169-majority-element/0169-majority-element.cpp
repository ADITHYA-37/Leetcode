class Solution {
public:
    int majorityElement(vector<int>& a) {
        unordered_map<int,int> mp;
        for (int i : a){
            mp[i]++;
            if (mp[i] > a.size()/2){
                return i;
            }
        }
        return -1;
    }
};