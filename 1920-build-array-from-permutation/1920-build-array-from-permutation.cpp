class Solution {
public:
    vector<int> buildArray(vector<int>& a) {
        vector<int> res;
        for(int i:a){
            res.push_back(a[i]);
        }
        return res;
    }
};