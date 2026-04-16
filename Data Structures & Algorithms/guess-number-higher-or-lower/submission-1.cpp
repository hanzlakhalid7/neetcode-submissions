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
        int s = 0;
        long long m;
        while(s <= n){
            m = s+(n-s)/2;
            int a = guess(m);
            if(a == 0) return m;
            if (a == -1) n = m-1;
            else s = m+1;
        }
        return m;
    }
};