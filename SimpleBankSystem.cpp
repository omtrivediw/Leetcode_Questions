class Bank {
public:
    vector<long long> banking;
    int size = 0;
    Bank(vector<long long>& balance) {
        for(auto i : balance){
            banking.push_back(i);
            ++size;
        }
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(account1 <= size and banking[account1 - 1] >= money){
            if(account2 <= size){
            banking[account1 - 1] -= money;
            banking[account2 - 1] += money;
            return true;
            }
        }
        return false;
    }
    
    bool deposit(int account, long long money) {
        if(account <= size){
            banking[account - 1] += money;
            return true;
        }
        return false;
    }
    
    bool withdraw(int account, long long money) {
        if(account <= size and banking[account - 1] >= money){
            banking[account - 1] -= money;
            return true;
        }
        return false;

    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
