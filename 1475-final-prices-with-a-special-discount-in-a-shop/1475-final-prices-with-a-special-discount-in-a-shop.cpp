class Solution {
public:
    vector<int> finalPrices(vector<int>& a) {
        vector<int> res;
        int n=a.size();
        for(int i=0;i<n;i++){
            int min=0;
            for(int j=i+1;j<n;j++){
                if(a[j]<=a[i]){
                    min=a[j];
                    break;
                }
            }
            res.push_back(a[i]-min);
        }
        return res;
    }
};