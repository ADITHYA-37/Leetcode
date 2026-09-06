class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        unordered_map<int,int> mp;
        for(int i: a){
            mp[i]++;
            if(mp[i]>1)
                return true;
        }
        return false;
    }
};