#include <stdio.h>

int main()
{
	int i = 1;
	while(i <= 10)
	{
		printf("\n %d", i);
		i = i + 1; // обновлено условие
	}
	return 0;
}