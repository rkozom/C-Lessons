# Урок по C №12. Структуры

__Структуры__ - это определяемые пользователем типы данных, которые содержат и хранят совместно информацию,
относящуюся к некоторой сущности. Основное отличие между массивом и структурой состоит в том, что массив
может хранить информацию только одного определенного типа.

## Объявление структур
Структура обычно определяется, используя следующий синтаксис:
```c
struct struct-name
{
	data-type1 var-name1;
	...
	data-typen var-namen;
};
```

Например, если нужно хранить информацию об учащемся, то можно объявить такую структуру:
```c
struct student
{
	int id;
	char name[20];
	char course[20];
};
```

Объявить переменную типа `student` можно следующим образом:
```c
struct student stud1;
```
Здесь `struct student` - это тип даных, а `stud1` - это имя переменой.

Также можно объявить переменные сразу во время определения структуры, используя следующий синтаксис:
```c
struct student
{
	int id;
	char name[20];
	char course[20];
} stud1, stud2;
```

Используя ключевое слово `typedef`, можно определить новый тип, являющийся структурой:
```c
typedef struct student
{
	int id;
	char name[20];
	char course[20];
};
```

Соответственно, теперь становится возможным использовать тип `student` таким же образом, как и встроенные типы.

## Инициализация структур
Синтаксис инициализации структур следующий:
```c
struct struct_name
{
	data_type member_name1;
	data_type member_name2;
	data_type member_name3;
	.......................
} struct_var = {constant1, constant2, constant3,...};
```

Или можно так:
```c
struct struct_name
{
	data_type member_name1;
	data_type member_name2;
	data_type member_name3;
	.......................
};
struct struct_name struct_var = {constant1, constant2, constant 3,...};
```

Например,
```c
struct student
{
	int id;
	char name[20];
	char course[20];
} stud1 = {1684, "Ivan", "Grage"};
```

## Доступ к элементам структур
Каждый элемент структуры может быть использован как обычная переменная следующим образом:
```c
struct_var.member_name
```