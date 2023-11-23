class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low ; i <= high ; i++){
            if(isSymmetric(i))
            count++;
        }
        return count;
    }
private:
    bool isSymmetric(int num){
        int digits = 0;
        int temp = num;
        int temp2 = num;
        while(temp){
            temp /= 10;
            digits++;
        }
        if(digits % 2 != 0) return false;
        int firstHalf = temp2 / (pow(10 , (digits/2)));
        int sumOfFirstHalf = sumOf(firstHalf);
        if(sumOfFirstHalf == (sumOf(num) - sumOfFirstHalf)) return true;
        return false;
    }

    int sumOf(int number){
        int sum = 0;
        while(number != 0){
            sum += number % 10;
            number /= 10;
        }
        return sum;
    }
};
