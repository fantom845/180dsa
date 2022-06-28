class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int c = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) c++;
        }
        if(c>1){
            vector<int> ans(nums.size(), 0);
            return ans;
        }
        
        else{
        
            vector<int> ans;

            // for(int i = 0; i < nums.size(); i++){
            //     int prod = 1;
            //     for(int j = 0; j < nums.size(); j++)

            int prod = 1, zer = 1;
            for(int i = 0; i < nums.size(); i++){
                prod*=nums[i];
            }
            if(prod == 0){
                for(int i = 0; i < nums.size(); i++){
                    if(nums[i]!=0){
                        zer*=nums[i];
                    }
                }
                for(int i = 0; i < nums.size(); i++){
                    if(nums[i]!=0){
                        ans.push_back(0);
                    }
                    else ans.push_back(zer);
                }

            }
            else{
                for(int i = 0; i < nums.size(); i++){
                    ans.push_back(prod/nums[i]);
                }
            }
            return ans;
        }
    }
};