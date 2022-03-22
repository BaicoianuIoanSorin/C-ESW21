#include "Account.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct AccountImpl {
	int accountNo;
	double creditLimit;
	double balance;
} AccountImpl_st;

AccountImpl_t create(int accountNo, double creditLimit)
{
	AccountImpl_t _newAccount = calloc(sizeof(AccountImpl_st), 1);

	if (NULL == _newAccount)
	{
		return NULL; // There was not enough memory
	}
	if (accountNo < 0)
	{
		accountNo = -accountNo;
	}
	_newAccount->accountNo = accountNo;
	_newAccount->creditLimit = creditLimit;

	return _newAccount;
}

void destroy(AccountImpl_t self)
{
	if (NULL != self)
	{
		free(self);
	}
}

AccountStatus_t withdraw(AccountImpl_t self, double amount)
{
	if (NULL != self)
	{
		if (getBalance(self) + getCreditLimit(self) < amount || amount < 0)
		{
			return OVER_MAX_CREDIT_LIMIT;
		}
		self->balance -= amount;
		return OK;
	}
	else return ACCOUNT_NOT_INSTANTIATED;
}


AccountStatus_t deposit(AccountImpl_t self, double amount)
{
	if (NULL != self)
	{
		if (amount < 0)
		{
			return NEGATIVE_AMOUNT;
		}
		self->balance += amount;
		return OK;
	}
	else return ACCOUNT_NOT_INSTANTIATED;
}

double getBalance(AccountImpl_t self)
{
	return self->balance;
}

double getCreditLimit(AccountImpl_t self)
{
	return self->creditLimit;
}

int getAccountNo(AccountImpl_t self)
{
	return self->accountNo;
}





