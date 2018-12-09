#include <stdio.h>
#include <stdlib.h>
 
#define SIZE 10
 
int main() {
	int** A = (int**) malloc(SIZE * sizeof(int*));
	if (A == NULL) {
		printf("Memory allocation error!\n");
		return -1;
	}
 
    for (size_t i = 0; i < SIZE; i++) {
        A[i] = (int*) malloc((i + 1) * sizeof(int));
		if (A[i] == NULL) {
			printf("Memory allocation error!\n");
			return -1;
		}
    }
 
    for (size_t i = 0; i < SIZE; i++) {
        for (size_t j = i; j > 0; j--) {
            A[i][j] = i * j;
        }
    }
 
    for (size_t i = 0; i < SIZE; i++) {
        for (size_t j = i; j > 0; j--) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
 
    for (size_t i = SIZE-1; i > 0; i--) {
        free(A[i]);
    }
    
	free(A);
     
	return 0;
}