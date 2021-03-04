#include <stdio.h>

int main_loop(void)
{
	for (size_t i = 0; i < 10; i++)
	{
		printf("Hello World\n");
	}


	int a = 0;
	while (a < 10)
	{
		printf("Hello World %d\n", a++);
	}


	int b = 0;
	do
	{
		printf("Hello World %d\n", b++);
	} while (b < 10);


	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	

	return 0;
}