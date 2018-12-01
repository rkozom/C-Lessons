// Домашнее задание: получение обратной строки

#include <stdio.h>
#include <string.h>
int main()
{
	char str[100], reverse_str[100], temp;
	printf("\n Enter the string : ");
	gets(str);

	int i = 0;
	int j = strlen(str) - 1;
	
	while(i < j)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		i++;
		j--;
	}
	
	printf("\n The reversed string is : ");
	puts(str);
	
	return 0;
}