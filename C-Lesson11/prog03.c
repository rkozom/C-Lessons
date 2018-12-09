// Программа выделяет память под двумерный массив, а затем освобождает эту память

#include <stdio.h>
#include <stdlib.h>
 
#define COL_NUM 100
#define ROW_NUM 100
 
int main() {
 
    float** p = (float**) malloc(ROW_NUM * sizeof(float*));
	if (p == NULL) {
		printf("Memory allocation error!\n");
		return -1;
	}
    
	for (size_t i = 0; i < ROW_NUM; i++) {
        p[i] = (float*) malloc(COL_NUM * sizeof(float));
		if (p[i] == NULL) {
			printf("Memory allocation error!\n");
			return -1;
		}

    }
 
    //Здесь какой-то важный код по работе с двумерным массивом
	
    for (size_t i = 0; i < ROW_NUM; i++) {
        free(p[i]);
    }
	
    free(p);
	
	return 0;
}