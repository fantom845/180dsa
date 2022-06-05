class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       next_permutation(nums.begin(),nums.end());
        
        
        //  int flag = 0, n = nums.size();
       //  for(int i = nums.size()-1; i>0; i--){
       //      if(nums[i]>nums[i-1]){
       //          swap(nums[i],nums[i-1]);
       //          flag = 1;
       //          break;
       //      }
       //  }
       //  if(flag == 0){
       //      sort(nums.begin(),nums.end());
       //  }
       // else{
       //      for(int j=n-1; j>=0; j--){
       //          if(nums[1]<nums[j]){
       //              break;
       //          }
       //      }
       // }
        
    }
};