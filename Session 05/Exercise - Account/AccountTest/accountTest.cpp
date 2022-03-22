#include "gtest/gtest.h"

extern "C" {
#include <Account.h>
}

class AccountTest : public ::testing::Test {
protected:
	void SetUp() override {}
	void TearDown() override {}
};


//Account balance must be zero when the account is created
TEST_F(AccountTest, ZeroAmount) {
  //Arrange 
  //Act
	AccountImpl_t account = create(1020, 20030);

	//Assert/Except
	ASSERT_EQ(getBalance(account), 0);
}

//It is not possible to deposit a negative amount
TEST_F(AccountTest, DepositNegativeAmount){
	
	AccountImpl_t account = create(1020, 20030);
	deposit(account, -10000);

	ASSERT_EQ(getBalance(account), 0);

}

//Positive deposit is OK
TEST_F(AccountTest, PositiveDeposit)
{
	AccountImpl_t account = create(1020, 20030);
	deposit(account, 10000);
	ASSERT_EQ(getBalance(account), 10000);
}

// It is not possible to withdraw a negative amount
TEST_F(AccountTest, WithdrawNegativeAmount)
{
	AccountImpl_t account = create(1020, 20030);
	withdraw(account, -10000);
	withdraw(account, 30000); //it has to be a sum more than the creditlimit (in case if balance is 0)
	
	ASSERT_EQ(getBalance(account), 0);
}

//The account must never be negative
TEST_F(AccountTest, AccountNumberNegative)
{
	AccountImpl_t account = create(-1020, 20030);
	
	ASSERT_EQ(getAccountNo(account), 1020);
}