#include <stdio.h>

typedef struct POINT1
{
	int x, y;
} POINT1;

typedef union POINT2
{
	int x;
	int y;
} POINT2;

int main()
{
	POINT1 P1 = {2,3};
	// POINT2 P2 ={4,5}; невозможно в случае объединения
	
	POINT2 P2;
	P2.x = 4;
	P2.y = 5;
	
	printf("\n The coordinates of P1 are %d and %d", P1.x, P1.y);
	printf("\n The coordinates of P2 are %d and %d", P2.x, P2.y);
	
	return 0;
}