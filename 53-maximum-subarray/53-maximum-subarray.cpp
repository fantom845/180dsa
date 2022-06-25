class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = -10000, sum = -10000;
        for(int k = 0 ; k < nums.size(); k++){
            sum = max(nums[k], sum+nums[k]);
            m= max(m, sum);
        }   
        return m;
    }
};