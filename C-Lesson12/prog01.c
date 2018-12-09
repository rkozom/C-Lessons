// Программа использует структуру для хранения и отображения информации об учащихся

#include <stdio.h>

int main()
{
	struct student
	{
		int id;
		char name[80];
		char DOB[80];
	};

	struct student stud1;
	
	printf("\n Enter ID: ");
	scanf("%d", &stud1.id);
	printf("\n Enter the name: ");
	scanf("%s", stud1.name);
	printf("\n Enter the DOB: ");
	scanf("%s", stud1.DOB);
	printf("\n ********STUDENT'S DETAILS *******");
	printf("\n ID No. = %d", stud1.id);
	printf("\n NAME = %s", stud1.name);
	printf("\n DBO = %s", stud1.DOB);

	return 0;
}