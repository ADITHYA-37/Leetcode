class Solution {
public:
    vector<int> runningSum(vector<int>& a) {
        vector<int> res;
        res.push_back(a[0]);
        for(int i=1;i<a.size();i++){
            res.push_back(a[i] + res[i-1]);
        }
        return res;
    }
};