// Программа вычисляет площадь круга по введенному пользователем радиусу

#include <stdio.h>

int main()
{
	float radius;
	printf("\n Enter the radius of the circle: ");
	scanf("%f", &radius);
	double area = 3.14 * radius * radius;
	printf("\n Area = %.2lf", area);
	return 0;
}