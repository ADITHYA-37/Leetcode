class Solution {
public:
    vector<int> runningSum(vector<int>& a) {
        vector<int> res;
        for(int i=0;i<a.size();i++){
            int v=0;
            for(int j=0;j<=i;j++){
                v+=a[j];
            }
            res.push_back(v);
        }
        return res;
    }
};