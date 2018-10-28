// Оператор break

#include <stdio.h>

int main()
{
	int i = 0;
	while(i <= 10)
	{
		if (i == 5)
			break;
		printf("\t %d", i);
		i = i + 1;
	}
	
	return 0;
}