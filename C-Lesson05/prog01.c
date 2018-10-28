// Программа определяет, простое или составное число ввел пользователь
#include <stdio.h>

int evenodd(int); //FUNCTION DECLARATION

int main()
{
int num, flag;
	printf("\n Enter the number : ");
	scanf("%d", &num);
	flag = evenodd(num); //FUNCTION CALL
	
	if (flag == 1)
		printf("\n %d is EVEN", num);
	else
		printf("\n %d is ODD", num);
	
	return 0;
}

int evenodd(int a) // FUNCTION HEADER
{
	// FUNCTION BODY
	if(a%2 == 0)
	return 1;
	else
	retun 0;
}