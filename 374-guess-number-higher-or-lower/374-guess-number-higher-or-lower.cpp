/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        long l = 0;
        long r = n;
        
        long mid = (l+r)/2;
        
        while(guess(mid)!=0){
            if(guess(mid)>0){
                l = mid+1;
                mid = (l+r)/2;
                
            }
            
            else if(guess(mid)<0){
                r = mid-1;
                mid = (l+r)/2;
                
            }
            else break;
        }
        return mid;
    }
};