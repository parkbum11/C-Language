#include <stdio.h>

int main(void)
{
	/* int age = 15;
	if (age >= 20)
	{
		printf("�Ϲ��Դϴ�");
	}
	else
	{
		printf("�л��Դϴ�");
	} */

	int age = 14;
	if (age >= 8 && age < 14)
	{
		printf("�ʵ�");
	}
	else if (age >= 14 && age < 17)
	{
		printf("�ߵ�");
	}
	else if (age >= 17 && age < 20)
	{
		printf("���");
	}
	else
	{
		printf("���л� �̻�");
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