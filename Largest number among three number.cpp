#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the three numbers : \n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("The Largest number is %d\n", a);
		}
		else
		{
			printf("The Largest number is %d\n", c);
		}
	}
	else
	{
		if (b > c)
		{
			printf("The Largest number is %d\n", b);
		}
		else
		{
			printf("The Largest number is %d\n", c);
		}
	}
	return 0;
}