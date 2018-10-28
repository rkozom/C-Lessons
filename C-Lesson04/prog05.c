#include <stdio.h>
int main()
{
	int n;
	printf("\n Enter the value of n: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		printf("\n %d", i);
	}
	return 0;
}