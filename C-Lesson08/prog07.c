// Программа вычисляет сумму четных элементов массива, используя передачу массива в функцию

#include <stdio.h>

int calc_sum(int* x, size_t n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (x[i] % 2 == 0)
			sum += x[i];
	}
	
	return sum;
}

int main()
{
	size_t size;
	
	printf("\n Number of elements: ");
	scanf("%zd", &size);
	
	int arr[size];
	
	printf("\n Enter %zd numbers: ", size);
	for (size_t i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	
	int sum = calc_sum(arr, size);
	
	printf("\n Sum = %d", sum);
	
	return 0;
}
