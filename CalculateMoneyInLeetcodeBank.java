class Solution {
    public int totalMoney(int n) {
        int initial = 1;
        int temp = initial + 1;
        int count = 0;
        for(int i = 1 ; i <= n ; i++){
            if(i % 7 == 1 && i > 7){
                initial = temp;
                temp++;
            }
            count += initial;
            initial++;
        }
        return count;
    }
}
