// Программа вычисляет площадь поверхности и объем шара по введенному пользователем радиусу

#include <stdio.h>
#include <math.h>

int main()
{
	float r;
	printf("\n r = ");
	scanf("%f", &r);
	
	double V = (3*M_PI*r*r*r)/4; // M_3PI_4*r*r*r
	double S = 4*M_PI*r*r;
	
	printf("\n V = %.2f\n S = %.2f", V, S);
	
	return 0;
}