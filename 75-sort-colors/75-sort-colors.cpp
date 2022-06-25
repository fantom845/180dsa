class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> a,b,c;
        for( int  i = 0; i < nums.size(); i++){
            if(nums[i]==0){
                a.push_back(0);
            }
            if(nums[i]==1){
                b.push_back(1);
            }
            else if(nums[i]==2)c.push_back(2);
        }
        nums.clear();
        for(int i = 0; i < a.size(); i++){
            nums.push_back(0);
        }
        for(int i = 0; i < b.size(); i++){
            nums.push_back(1);
        }
        for(int i = 0; i < c.size(); i++){
            nums.push_back(2);
        }
    }
};