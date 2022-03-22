typedef enum AccountStatus { OK, OVER_MAX_CREDIT_LIMIT, ACCOUNT_NOT_INSTANTIATED, NEGATIVE_AMOUNT } AccountStatus_t;
typedef struct AccountImpl* AccountImpl_t;

AccountImpl_t create(int accountNo, double creditLimit);
AccountStatus_t withdraw(AccountImpl_t self, double amount);
AccountStatus_t deposit(AccountImpl_t self, double amount);
double getBalance(AccountImpl_t self);
double getCreditLimit(AccountImpl_t self);
int getAccountNo(AccountImpl_t self);