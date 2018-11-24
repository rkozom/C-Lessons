// Программа объединяет две строки

#include <stdio.h>

int main()
{
	char destStr[100], sourceStr[50];
	int i=0, j=0;
	printf("\n Enter the source string: ");
	gets(sourceStr);
	
	printf("\n Enter the destination string: ");
	gets(destStr);

	while(destStr[i] != '\0')
		i++;
	
	while(sourceStr[j] != '\0'){
		destStr[i] = sourceStr[j];
		i++;
		j++;
	}

	destStr[i] = '\0';
	
	printf("\n After appending, the destination string is: ");
	puts(destStr);
	return 0;
}