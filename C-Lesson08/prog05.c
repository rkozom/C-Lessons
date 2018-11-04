// Программа ищет минимальный элемент в массиве и его позицию

#include <stdio.h>

int main()
{
	int n, arr[20], small, pos;
	
	printf("\n Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	printf("\n Enter the elements : ");
	for(int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}

	small = arr[0];
	pos = 0;
	
	for(int i=1;i<n;i++) {
		if(arr[i] < small) {
			small = arr[i];
			pos = i;
		}
	}
	
	printf("\n The smallest element is: %d", small);
	printf("\n The position of the smallest element in the array is: %d", pos);
	
	return 0;
}