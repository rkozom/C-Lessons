// Программа читает 2D-массив с оценками пяти учеников по трем предметам и выводит наивысшие оценки по каждому предмету

#include <stdio.h>
int main()
{
	int marks[5][3];
	for(int i = 0; i < 5; i++)
	{
		printf("\n Enter the marks obtained by student %d",i+1);
		for(int j = 0; j < 3; j++)
		{
			printf("\n marks[%d][%d] = ", i, j);
			scanf("%d", &marks[i][j]);
		}
	}
	
	for(int j = 0; j < 3; j++)
	{
		int max_marks = -999;
		for(int i = 0; i < 5; i++)
		{
			if(marks[i][j] > max_marks)
				max_marks = marks[i][j];
		}
		printf("\n The highest marks obtained in the subject %d = %d", j+1, max_marks);
	}
	
	return 0;
}