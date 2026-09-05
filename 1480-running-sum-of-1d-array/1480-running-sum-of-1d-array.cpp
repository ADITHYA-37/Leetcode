class Solution {
public:
    vector<int> runningSum(vector<int>& a) {
        vector<int> res;
        int v;
        res.push_back(a[0]);
        for(int i=1;i<a.size();i++){
            v = a[i] + res[i-1];
            res.push_back(v);
        }
        return res;
    }
};