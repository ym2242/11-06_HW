#include<stdio.h>
#include<stdlib.h>

int main()
{
	char input, output;
	printf("��J�r���i���ഫ:");
	scanf_s("%c", &input);
	if (input <= 90)
	{
		output = input + 32;
	}
	else{

		output = input - 32;
	}
	printf("�ഫ�ᬰ:%c\n", output);
	system("pause");
	return 0;
}