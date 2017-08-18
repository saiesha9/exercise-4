#include<stdio.h>

int get_grade_count(char *, char);

int main()
{
	char grade[10],chk;
	int total_grades,i;

	printf("Enter ten grades:\n");
	for(i = 0; i < 10; i++)
	{
		scanf("%c",&grade[i]);
		getchar();
	}

	printf("Enter the required grade:\n");
	scanf("%c",&chk);

	total_grades = get_grade_count(grade,chk);

	printf("There are %d number of students in grade %c.\n",total_grades,chk);

	return 0;
}

int get_grade_count(char *ptr, char chk)
{
	int i,count=0;

	for(i = 0; i < 10; i++)
	{
		if(*ptr == chk)
			count++;

		ptr++;
	}
	return count;
}
