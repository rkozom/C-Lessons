// Программа сравнивает две строки

#include <stdio.h>
#include <string.h>
int main()
{
	char str1[50], str2[50];
	int i=0, len1=0, len2=0, same=0;
	
	printf("\n Enter the first string: ");
	gets(str1);
	
	printf("\n Enter the second string: ");
	gets(str2);

	len1 = strlen(str1);
	len2 = strlen(str2);
	
	if(len1 == len2) {
		while(i < len1) {
			if(str1[i] == str2[i])
				i++;
			else break;
		}
		if(i == len1) {
			same=1;
			printf("\n The two strings are equal");
		}
	}
	
	if(len1 != len2)
		printf("\n The two strings are not equal");
	
	if(same == 0)
	{
		if(str1[i] > str2[i])
			printf("\n String 1 is greater than string 2");
		else if(str1[i] < str2[i])
			printf("\n String 2 is greater than string 1");
	}
	
	return 0;
}