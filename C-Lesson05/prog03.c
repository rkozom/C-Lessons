// Программа вычисляет n-ый элемент последовательности Фибонначи с помощью массива

#include <stdio.h>
#include <inttypes.h>

uint64_t fib(uint32_t n)
{
    uint64_t Fibonaci[n+1];
    Fibonaci[0] = 0;
    Fibonaci[1] = 1;

    for (uint32_t i=2; i <= n; i++) {
        Fibonaci[i] = Fibonaci[i-2] + Fibonaci[i-1];
    }
    return Fibonaci[n];
}

int main()
{
    uint32_t n;
    printf("N = ");
    scanf("%u", &n);

    printf("fib(%u) = %u", n, fib(n));
}