// ��������� ������������� ������������� ����������� ������ ��������

#include <stdio.h>

struct student
{
	union
	{
		char name[20];
		int roll_no;
	};
	int marks;
};

int main()
{
	struct student stud;
	char choice;
	
	printf("\n You can enter the name or roll number of the student");
	printf("\n Do you want to enter the name? (Y or N): ");
	
	gets(&choice);
	if(choice=='y' || choice=='Y')
	{
		printf("\n Enter the name: ");
		gets(stud.name);
	}
	else
	{
		printf("\n Enter the roll number: ");
		scanf("%d", &stud.roll_no);
	}

	printf("\n Enter the marks: ");
	scanf("%d", &stud.marks);
	
	if(choice=='y' || choice=='Y')
		printf("\n Name: %s ", stud.name);
	else
		printf("\n Roll Number: %d ", stud.roll_no);

	printf("\n Marks: %d", stud.marks);

	return 0;
}