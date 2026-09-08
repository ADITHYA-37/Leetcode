class Solution {
public:
    int removeElement(vector<int>& a, int v) {
        int k=0, n=a.size();
        for(int i =0; i<n ; i++){
            if (a[i]!=v){
                a[k]=a[i];
                k++;
            }
        }
        return k;
    }
};