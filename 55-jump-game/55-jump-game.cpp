class Solution {
public:
    bool canJump(vector<int>& nums) {
        int k=nums[0];
        for(int i=1;i<nums.size();i++){
        if(i>k){
        return false;
        }
        k=max(k,i+nums[i]);
        }
        return true;
    }
};