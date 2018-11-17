// Программа находит второй максимальный элемент из n чисел, используя массив

#include <stdio.h>
int main()
{
	int n, arr[20];
	
	printf("\n Enter the number of elements in the array (max 20): ");
	scanf("%d", &n);
	
	printf("\n Enter the elements: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}
	
	int second_max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if(arr[i] != max)
		{
			if(arr[i] > second_max)
				second_max = arr[i];
		}
	}
	
	printf("\n The numbers you entered are: ");
	for(int i = 0; i < n; i++)
		printf("\t %d", arr[i]);
	
	printf("\n The largest of these numbers is : %d", max);
	printf("\n The second largest of these numbers is : %d", second_max);
	
	return 0;
}