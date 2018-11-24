# Программа считывает строку и вычисляет ее длину

#include <stdio.h>
int main()
{
	char str[100], i = 0, length;
	printf("\n Enter the string : ");
	gets(str);
	while(str[i] != '\0') {
		i++;
	}
	
	length = i;
	
	printf("\n The string is: %s", str);
	printf("\n The length of the string is: %d", length);
	
	return 0;
}