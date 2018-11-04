// Программа ищет сумму и среднее n чисел, используя массив

#include <stdio.h>

int main()
{
	int n, arr[20], sum = 0;
	float mean = 0.0;
	
	printf("\n Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	for(int i=0;i<n;i++) {
		printf("\n arr[%d] = ", i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++)
		sum += arr[i];
	
	mean = (float)sum/n;
	
	printf("\n The sum of the array elements = %d", sum);
	printf("\n The mean of the array elements = %.2f", mean);
	
	return 0;
}