// Функция выделяет память под массив из 100 элементов типа int, а потом освобождает ее.

#include <stdlib.h>
#include <stdio.h>
 
int main() {
    int *p = NULL;
    p = (int*) malloc(sizeof(int) * 100);
	
	if (p == NULL) {
		printf("Memory allocation error!\n");
		return -1;
	}
	
	printf("Memory allocation was successful.\n");
 
    free(p);
	
	return 0;
}