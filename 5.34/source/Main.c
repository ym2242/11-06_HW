#include<stdio.h>
#include<stdlib.h>

int integerpower(int base, int exponent);
int main()
{
	int a, b;
	printf("Enter base and exponent:");
	scanf_s("%d%d", &a, &b);
	printf("power(%d,%d)=%d\n", a, b,integerpower(a,b));
	system("pause");
	return 0;
}

int integerpower(int base, int exponent)
{
	if (exponent==1)
	{
		return base;
	}
	else
	{
		return base*integerpower(base, exponent - 1);
	}
}