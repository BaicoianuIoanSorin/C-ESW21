#include "mystr.h";
#include <string.h>

int my_strlen(const char* str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
	/*You use while loop until 'str' has the last character 'null' or '\0'*/
}

int my_strcmp(const char* str1, const char* str2)
{
	int charCompareStatus = 0;
	/*
	The my_strcmp() function takes two arguments for strings of type pointers to char and returns an integer value. 
	In this function in a while loop, I am iterating each character of both strings. 
	If the characters are mismatched or get null character for any string then we are terminating the loop.
	*/
	while ((str1 != '/0' && str2 != '/0') && str1 == str2)
	{
		str1++;
		str2++;
	}

	charCompareStatus = (str1 == str2) ? 0 : (str1 > str2) ? 1 : -1;
	/*
	Now after terminating the loop we are comparing the ASCII value of last character 
	(character for both strings at the time of loop termination) of both strings.
	Using the ternary operator we will assign the appropriate value to the status variable.
	If the last character of both strings is greater than, equal to, or less than zero, 
	accordingly we will assign 1, 0, or -1 to the status variable.
	*/
	return charCompareStatus;
}

char* my_strcpy(char* dest, const char* src)
{
	if (dest == NULL) {
		return NULL;
	}

	// take a pointer pointing to the beginning of the destination string
	char* ptr = dest;

	// copy the C-string pointed by source into the array
	// pointed by destination
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	// include the terminating null character
	*dest = '\0';

	// the destination is returned by standard `strcpy()`
	return ptr;
}
char* my_strdup(const char* str)
{
	size_t len = my_strlen(str);
	char* result = malloc(len + 1);
	for (size_t i = 0; i <= len; i++)
		result[i] = str[i];
	return result;
}

