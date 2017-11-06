#include<stdio.h>
#include<stdlib.h>

int main()
{
	char input, output;
	printf("輸入字母進行轉換:");
	scanf_s("%c", &input);
	if (input <= 90)
	{
		output = input + 32;
	}
	else{

		output = input - 32;
	}
	printf("轉換後為:%c\n", output);
	system("pause");
	return 0;
}