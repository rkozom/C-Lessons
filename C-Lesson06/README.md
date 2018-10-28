# Урок по C №06 - Препроцессор, компилятор, компоновщик

Сборка - процесс трансляции исходного кода в виде текстового файла в представление, которое может быть выполнено
процессором.

Сборка состоит из 3 этапов:
1. Обработка исходного кода препроцессором (preprocessing)
2. Компиляция - перевод подготовленного исходного кода в инструкции процессора (объектный файл) (compiling)
3. Компоновка - сборка одного или нескольких объектных файлов в один исполняемый файл (linking)

**square.c**
```c
int square(int value)
{
	return value * value;
}
```
```sh
gcc -c square.c
```
```sh
objdump -d square.o
```

**main.c**
```c
int square(int value);

int main()
{
	return square(2);
}
```

```sh
objdump -d -r main.o
```
`-r` -- информация о релокациях

**square.h**
```c
int square(int value);
```

**main.c**
```c
#include "square.h"

int main()
{
	return square(2);
}
```

## Препроцессор
```sh
gcc -E main.c
```

## Условная компиляция
```sh
gсс -DDEBUG main.cpp
```

```c
#define DEBUG
#ifdef DEBUG
	...
#else
	...
#endif
```

## Компиляция
```sh
gсс -c main.cpp
```

## Компоновка
```sh
gсс -o my_prog main.o square.o
```

```sh
gcc -o my_prog -v main.cpp square.cpp
```

## Оптимизация
**main.c**
```c
int square(int value)
{
	return value * value;
}

int main()
{
	return square(2);
}
```

```sh
gcc -c main.cpp
objdump -d main.o
gсс -O2 -c main.cpp
objdump -d main.o
```

## Статические библиотеки
```sh
ar rc libsquare.a squre.o
```

## Makefile

```
CC=gсс

all: my_prog

my_prog: main.o square.o
	$(CC) -o my_prog main.o square.o
main.o: main.c square.h
	$(CC) -c main.c
square.o: square.c square.h
	$(CC) -c square.c
clean:
	rm -rf *.o my_prog
```