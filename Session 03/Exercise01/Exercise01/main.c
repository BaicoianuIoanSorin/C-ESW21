#include <stdio.h>

int main()
{
	unsigned int i, j;
	i = 7;
	j = 3;
	return i % j;
}
//If you use % for 7 and 3 you will find that the result is 1.
//If you use / for 7 and 3 you will find that the result is 2.
//I used short and int data types and i found that the result is the same without any problems.
//Even if you use unsigned short and int the program will compile. 
