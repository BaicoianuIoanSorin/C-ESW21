#include <stdio.h>
int main () 
{
	char text[] = "The quick brown fox jumps over lazy dog";
	char*endS = text + 39; 
	/* Don't worry about this */
	printf("The string now says: \"%s\n", text);
	*endS = '\0';printf ("The string now says: \"%s\n", text);
	//Repeat the following three lines in your own example, but experiment 
	//with different values thanjust subtracting 1 from endS
	endS = endS - 1;
	*endS = '\0';
	printf ("The string now says: \"%s\n", text);
	return 0;
}
//The output is:
/*
The string now says : "The quick brown fox jumps over lazy dog
The string now says : "The quick brown fox jumps over lazy dog
The string now says : "The quick brown fox jumps over lazy do*/

/* If you change '-1' from ends= ends - 1 with '-5' than you will receive the output:
The string now says : "The quick brown fox jumps over lazy dog
The string now says : "The quick brown fox jumps over lazy dog
The string now says : "The quick brown fox jumps over lazy
*/