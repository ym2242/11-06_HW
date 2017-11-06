#include<stdio.h>
#include<stdlib.h>

unsigned long long int fibonacci(int n);

int main()
{
	int  a;
	int  b = 0;
	printf("請輸入一個數字:");
	scanf_s("%u", &a);
	printf("fibonacci(%d):%I64u\n", a, fibonacci(a));
	do
	{

		printf("fibonacci(%d):%I64u\n", b, fibonacci(b));
		b++;
	} while (b<=94);
	printf("能顯示且未溢位的最大項為:12200160415121876738\n\n");
	system("pause");
	return 0;
}

unsigned long long int fibonacci(int n)
{
	unsigned long long int q = 1;
	unsigned long long int b = 0;
	unsigned long long int c;
	if (n == 1 || n == 0)
	{
		return n;
	}
	else
	{
	
		for (int i = 2; i <= n; i++)
		{
			c = q;
			q += b;
			b = c;
		}
		return q;
	}
}