class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        unordered_set<int> s;
        for(int i: a){
            if(s.count(i)) // here count checks for if i is there in s or not if yes then it enter the condition
                return true;
            s.insert(i);// for 1st time occurence
        }
        return false;
    }
};