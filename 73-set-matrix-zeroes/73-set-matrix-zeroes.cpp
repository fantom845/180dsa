class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> copy;
        copy=matrix;
        for(int i =0; i < copy.size(); i++){
            for(int  j = 0; j<copy[0].size();j++){
                if(copy[i][j]==0){
                    for(int k = 0; k< copy.size();k++){
                        matrix[k][j]=0;
                    }
                    for(int k = 0; k< copy[0].size();k++){
                        matrix[i][k]=0;
                    }
                }
            }
        }
        
    }
};