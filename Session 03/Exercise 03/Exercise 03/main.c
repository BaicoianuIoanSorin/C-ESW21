#include <stdio.h>

#include "functions.h"

int main(void) {
	int x = 10;
	int y = 5;
	int z = 12;

	printf("\nHere, we power and swap values....\n\n");
	printf("%d to the power of %d=%d\n", x, y, power(x,y));
	printf("%d, %d, %d before\n", x, y, z);
	multiSwap(x, y, z);

	return 0;
}
/*
For having a number to the power of another number we need to include math.h library into functions.c to have the function pow(x,y)
If you don't want to have spaces as in this example: 
5       ,       12      ,       10 
and you would like to have it like that 
5,12,10
than just delete '/t' strings from the whole text and there you are.
For using functions from an interface which is "functions.h" than you have to implement it as 
'#include "functions.h" into "functions.c". In this file 'functions.c' you need to implement the functionality of each of 
the function.
If you want to use those functions into another file, for instance 'main.c', than you have to implement again #include "functions.h" 
and there you are, you have all functions implemented so far.
Function "multiswap" swaps variables and also prints the after result.	
*/
