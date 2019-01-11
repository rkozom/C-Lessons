// Программа вычисляет n-ый элемент последовательности Фибонначи с помощью рекурсии

#include <stdio.h>
#include <inttypes.h>

uint64_t fib(uint64_t n)
{
    if (n > 2)
        return fib(n-1) + fib(n-2);
    else
        return 1;
}

int main()
{
    uint64_t n;
    printf("N = ");
    scanf("%lu", &n);

    printf("fib(%lu) = %llu", n, fib(n));
}