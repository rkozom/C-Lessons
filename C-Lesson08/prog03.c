// Программа считывает и отображает n чисел, используя массив

#include <stdio.h>

int main()
{
	int n, arr[20];
	printf("\n Enter the number of elements in the array : ");
	scanf("%d", &n);
	
	for(int i = 0;i < n; i++)
	{
		printf("\n arr[%d] = ", i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n The array elements are: ");
	for(int i = 0; i < n; i++) {
		printf("\t %d", arr[i]);
	}
	
	return 0;
}