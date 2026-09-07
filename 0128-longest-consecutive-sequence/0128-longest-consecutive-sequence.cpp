class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        if (a.empty()){
            return 0;
        }

        sort(a.begin(),a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        int c=1,max=1,m=a[0];
        for(int i=1 ; i<a.size() ; i++){
            if (a[i] == m+1){
                c++;
            }
            else{
                c=1;
            }
            if (c > max){
                max = c;
            }
            m = a[i];
        }
        return max;
    }
};