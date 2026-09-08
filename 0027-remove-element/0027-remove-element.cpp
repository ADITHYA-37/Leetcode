class Solution {
public:
    int removeElement(vector<int>& a, int v) {
        int c=0, k=0, n=a.size();
        for(int i =0; i<n ; i++){
            if (a[i]!=v){
                a[k]=a[i];
                k++;
                c++;
            }
        }
        return c;
    }
};