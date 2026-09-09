class Solution {
public:
    string longestCommonPrefix(vector<string>& s) { // this is nlogn * n complexeity , for n2 complexeity see java soln 
        string a,r,b;
        sort(s.begin(),s.end());
        a=s.front();
        b=s.back();
        int i=0;
        while(i<a.size()&& i<b.size() && a[i]==b[i])
            i++;
        r = a.substr(0,i);
        return r;                                                                     
    }
};