// Программа выводит двумерный массив

#include <stdio.h>
int main()
{
	int arr[3][3] = {12, 34, 56, 32, 17, 11, 2, 12, -6};

	for(int i=0; i < 3; i++)
	{
		printf("\n");
		for(int j = 0; j < 3; j++)
			printf("%d\t", arr[i][j]);
	}
	
	return 0;
}