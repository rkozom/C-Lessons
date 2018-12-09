// Программа использует структуру для хранения и отображения информации об учащихся

#include <stdio.h>

int main()
{
	struct DOB
	{
		int day;
		int month;
		int year;
	};
	struct student
	{
		int id;
		char name[80];
		struct DOB date;
	};

	struct student stud1;
	
	printf("\n Enter ID: ");
	scanf("%d", &stud1.id);
	printf("\n Enter the name: ");
	scanf("%s", stud1.name);
	printf("\n Enter the DOB: ");
	scanf("%d %d %d", &stud1.date.day, &stud1.date.month, &stud1.date.year);
	printf("\n ********STUDENT'S DETAILS *******");
	printf("\n ID No. = %d", stud1.id);
	printf("\n NAME = %s", stud1.name);
	printf("\n DBO = %d-%d-%d", stud1.date.year, stud1.date.month, stud1.date.day);

	return 0;
}