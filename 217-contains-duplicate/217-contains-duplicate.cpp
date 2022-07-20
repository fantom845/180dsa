class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        
        int curr = nums[0];
        for(int i = 1;i<nums.size(); i++){
            
            if(nums[i] == curr)
                return true;
            else curr = nums[i];
        }
        
        return false;
        
    }
};