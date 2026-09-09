class Solution {
public:
    int maxArea(vector<int>& a) {
        int l=0 , h=a.size()-1 , area , max=0;
        while(l<=h){
            area = (min(a[l],a[h]))*(h-l);
            if (area > max){
                max = area;
            }
            if (a[l] == a[h]){
                l++;
            }
            else if (a[l] < a[h]){
                l++;
            }
            else{
                h--;
            }
        }
        return max;
    }
};