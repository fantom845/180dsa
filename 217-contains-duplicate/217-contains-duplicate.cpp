class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        for(auto i:nums){
            a.insert(i);
        }
        if(a.size()==nums.size()) return false;
        return true;
    }
};