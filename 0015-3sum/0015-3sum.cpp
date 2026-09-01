class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(), a.end());
        int l,h,n;
        vector<vector<int>> b; // vector is a dynamiccally growing array
        for(int k=0;k<a.size()-2;k++){
            if(k > 0 && a[k] == a[k-1]){
                continue;
            }
            l=k+1;
            h=a.size()-1;
            while(l<h){
                if(a[l]+a[h]+a[k]==0){
                    b.push_back({a[k], a[l], a[h]});
                    l++;
                    h--;
                    while(l < h && a[l] == a[l-1])
                        l++;
                    while(l < h && a[h] == a[h+1])
                        h--;
                }
                else if(a[l]+a[h]+a[k]<0){
                    l++;
                }
                else{
                    h--;
                }
            }
        }
        return b;          
    }
};