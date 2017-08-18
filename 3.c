#include<stdio.h>
#include<assert.h>

int grace_add(unsigned int);

int main()
{
	unsigned int marks;

	printf("Enter the internal scores of the student:\n");
	scanf("%d",&marks);

	marks = grace_add(marks);

	assert(grace_add(49)==50);
	assert(grace_add(45)==47);
	assert(grace_add(50)==50);
	assert(grace_add(36)==40);
	assert(grace_add(30)==35);
	assert(grace_add(26)==32);
	assert(grace_add(20)==25);
	assert(grace_add(65)==0);

	printf("The final marks after adding the grace is %d.\n",marks);

	return 0;
}

int grace_add(unsigned int i)
{
	if(i>=45 && i<=49)
	
		if(i == 49)
			return 50;
		else
			return i+2;
	
	else if(i>=40 && i<=44)
		return i+3;
	else if(i>=35 && i<=39)
		return i+4;
	else if(i>=30 && i<=34)
		return i+5;
	else if(i>=25 && i<=29)
		return i+6;
	else if(i==50)
		return i;
	else if(i>50)
	printf("Invalid score.\n");
	else
	return 25;
	return 0;
}
