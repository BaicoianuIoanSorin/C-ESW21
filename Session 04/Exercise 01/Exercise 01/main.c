#include <stdio.h>
#include "mystr.h"

int main()
{
	const char cuv[20] = "Cuvant";
	printf("Length of string: %d\n", my_strlen(cuv));
	
	const char str1[20] = "Cuvant1";
	const char str2[20] = "Cuvant";

	int result = my_strcmp(str1, str2);
	if (result == 0)
	{
		printf("Strings are the same\n");
	}
	else if (result == -1)
	{
		printf("First has more characters\n");
	}
	else if (result == 1)
	{
		printf("Second has more characters\n");
	}
	return 0;
}