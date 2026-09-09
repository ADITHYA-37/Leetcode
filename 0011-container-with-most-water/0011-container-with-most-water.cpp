class Solution {
public:
    int maxArea(vector<int>& a) {
        int l=0 , h=a.size()-1 , area , max=0;
        while(l<=h){
            area = (min(a[l],a[h]))*(h-l);
            if (area > max){
                max = area;
            }
            if (a[l] <= a[h]){ // for equals to case , we can keep either l++ or h-- , it doesnt matter
                l++;
            }
            else{
                h--;
            }
        }
        return max;
    }
};