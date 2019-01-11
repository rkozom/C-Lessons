# Урок по C №13. Обединения

__Обединения__ - это определяемые пользователем типы данных, которые аналогичны структурам. В отличие от структур, объединения могут хранить значение только одного своего поля в определенный момент времени.

## Объявление объединений
Синтаксис объявления объединений следующий:
```c
union union–name
{
	data_type var–name;
	data_type var–name;
	..................
};
```
Ключевое слово `typedef` может использоваться вместе с объединениями также, как и со структурами, для более простого объявления переменных. Самая важная вещь, которую нужно помнить про объединения это то, что размер объединения всегда равен размеру его самого большого поля.

## Доступ к полям объединения
Доступ к полям объединения осуществляется через точку (`.`), аналогично доступу к полям структуры.

## Объединения внутри структур
Объединения могут быть очень полезны, когда обяъвляются внутри структур. Например, если нужно в поле структуры сохранять строку либо число в зависимости от того, что ввел пользователь. 