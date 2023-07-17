#include <stdio.h>

/**
 * main - the main function of my code 
 *
 * Return: return  when it's correct
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(S)", sizeof(long int));
	printf("Size of a long long int: %lu byte(S)", sizeof(long long int));
	printf("Size of a float: %lu byte(S)", sizeof(float));
	return (0);
}
