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
        return binarysearch(1 , n);
    }
private:
    int binarysearch(long long low , long long high){
        while(low <= high){
            int mid = (low + high) / 2;
            int picked = guess(mid);
            if(picked == 0)
            return mid;
            else if(picked == -1){
                high = mid - 1;
            }
            else
            low = mid + 1;
        }
        return -1;
    }
};
