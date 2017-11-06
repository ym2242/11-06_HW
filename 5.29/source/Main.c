#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	int a, b, i=1;
	printf("Enter two positive integers:\n");
	scanf_s("%d", &a);
	scanf_s(" %d", &b);
	while (i%a != 0 || i%b != 0)
	{
		i++;
	}
	printf("[%d,%d]=%d\n", a, b, i);
	system("pause");
	return 0;
}
