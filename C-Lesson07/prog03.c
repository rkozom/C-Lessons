// Программа иллюстрирует работу оператора sizeof

#include <stdio.h>

int main()
{
	size_t size_char   = sizeof(char);
	size_t size_short  = sizeof(short);
	size_t size_int    = sizeof(int);
	size_t size_long   = sizeof(long);
	size_t size_float  = sizeof(float); 
	size_t size_double = sizeof(double);
	
	printf("\n Size of char is %zu bytes", size_char);
	printf("\n Size of short is %zu bytes", size_short);
	printf("\n Size of int is %zu bytes", size_int);
	printf("\n Size of long is %zu bytes", size_long);
	printf("\n Size of float is %zu bytes", size_float);
	printf("\n Size of double is %ld bytes", size_double);
	
	size_t size_ptr = sizeof(char*);
	printf("\n Size of pointer is %zu bytes", size_ptr);
	
}