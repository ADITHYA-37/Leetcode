class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        set<int> s(a.begin(),a.end());
        set<int> t(b.begin(),b.end());
        set<int> c;
        set_intersection(s.begin(),s.end(),t.begin(),t.end(),inserter(c,c.begin())); // does not return anything , sends the output to c
        vector<int> v(c.begin(),c.end());
        return v;
    }
};