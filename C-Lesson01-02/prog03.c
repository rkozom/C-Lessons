#include <stdio.h>

int main()
{
	int i_num;
	printf("\n Enter any integer: ");
	scanf("%d", &i_num);
	
	float f_num = (float)i_num;
	printf("\n The floating point variant of %d is = %f", i_num, f_num);
	return 0;
}