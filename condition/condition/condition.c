#include <stdio.h>

int main(void)
{
	/* int age = 15;
	if (age >= 20)
	{
		printf("일반입니다");
	}
	else
	{
		printf("학생입니다");
	} */

	int age = 14;
	if (age >= 8 && age < 14)
	{
		printf("초등");
	}
	else if (age >= 14 && age < 17)
	{
		printf("중등");
	}
	else if (age >= 17 && age < 20)
	{
		printf("고등");
	}
	else
	{
		printf("대학생 이상");
	}

	for (int i = 0; i < 10; i++)
	{
		if (i >=5)
		{
			printf("%d", i);
			break;
		}
		if (i == 3)
		{
			continue;
		}
		printf("%d", i);
	}

	return 0;
}