// Программа выделяет память под массив, заполняет его значениями и в конце освобождает память

#include <stdio.h>
#include <stdlib.h>
 
void main() {

    const int maxNumber = 100;

    size_t size;
    printf("Enter number from 0 to %d: ", maxNumber);
    scanf("%d", &size);
 
    int* p = (int*)calloc(size, sizeof(int));
 
    for (size_t i = 0; i < size; i++) {
        p[i] = i*i;
    }
 
    for (size_t i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
 
    free(p);
}