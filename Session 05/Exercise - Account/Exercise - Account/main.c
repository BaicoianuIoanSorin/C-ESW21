#include "Account.h"
#include <stdio.h>

int main(void)
{
	AccountImpl_t account = create(1020, 20030);
	deposit(account, 2000);
	printf("The amount now is: %f", getBalance(account));
}