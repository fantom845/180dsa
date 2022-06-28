class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
           
        
        vector<vector<int>> arr( n , vector<int> (n, 0));;
       
        
        int dir = 1;
        int i = 0, j = 0, m = n - 1, l = n - 1, t = 1;
        

        
        while(i<=m&&j<=l){
            for(int k = j; k <= l; k++){
                arr[i][k] = t;
                t++;
            }
            i++;
            
            for(int k = i; k <= m; k++){
                arr[k][l] = t;
                t++;
            }
            l--;
            
            for(int k = l; k >= j; k--){
                arr[m][k] = t;
                t++;
            }
            m--;
            
            for(int k = m; k >= i; k--){
                arr[k][j] = t;
                t++;
            }
            j++;
        }
        return arr;
        
        
        
    }
};