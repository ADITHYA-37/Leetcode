class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& a, int n) {
        vector<int> t= a;
        vector<bool> res;
        sort(t.begin(),t.end());
        int max = t[t.size()-1];
        for(int i : a){
            if(i+n>=max)
                res.push_back(true);
            else
                res.push_back(false);
        }
        return res;
    }
};