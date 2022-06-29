class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int l  = 0, r = nums.size()-1;
        int mid = (l+r)/2;
        
        if(r == 0){
            return nums[0];
        }
        
        if(nums[r]!=nums[r-1]){
            return nums[r];
        }
        
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        
        
        while(true){
            
            if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid]){
                
                return nums[mid];
            }
            
            if(mid%2 == 0){
                
                if(nums[mid] == nums[mid+1]){
                    l= mid;
                    mid = (l+r)/2;
                }
                
                else{
                    r = mid;
                    mid = (l+r)/2;
                }
                
            }
            
            else{
                if(nums[mid] == nums[mid-1]){
                    l= mid;
                    mid = (l+r)/2;
                }
                
                else{
                    r = mid;
                    mid = (l+r)/2;
                }
            }
            
             
        }
        
        return nums[mid];
        
    }
};