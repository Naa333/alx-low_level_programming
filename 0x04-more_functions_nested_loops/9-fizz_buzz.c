#include <stdio.h>



/**
 *main - program that prints either number
 *or fizz or buzz or fizzBuzz
 *Return: returns 0
 */

int main(void)
{

	int i;
	char a = "Fizz";
	char b = "Buzz";
	char c = "FizzBuzz";

	for (i = 0; i <= 100; i++)
	{
		if (i == 100)
		{
		printf("%s", b);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
		printf("%s", c);
		}
		else if (i % 3 == 0)
		{
			printf("%s", a);
		}
		else if (i % 5 == 0)
			printf("%s", b);
	}
		printf("\n");
		return (0);
}
