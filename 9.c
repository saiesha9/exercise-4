#include<stdio.h>
#include<assert.h>

int string_length(char *);
int string_copy(char *, char *);
int string_ncopy(char *, char *, int);
int string_concat(char *,char *);

int main()
{
	int n,func_sel;
	char input[100],output[100];

	printf("Select choice:\n");
	printf("1  String length.\n");
	printf("2  String copy.\n");
	printf("3  String copy n characters.\n");
	printf("4  String concatenate.\n");
	scanf("%d",&func_sel);
	getchar();

	switch(func_sel)
	{
		case 1:	printf("Enter a string:\n");
					fgets(input,100,stdin);
					printf("The length of the given string is: %d\n",string_length(input));
					break;

		case 2:	printf("Enter the string to be copied:\n");
					fgets(input,100,stdin);
					string_copy(output,input);
					printf("The data in the output is: %s\n",output);
					break;

		case 3:	printf("Enter the string to be copied:\n");
					fgets(input,100,stdin);
					printf("Enter the number of characters to be copied:\n");
					scanf("%d",&n);
					getchar();
					string_ncopy(output,input,n);
					printf("The data in the output is: %s\n",output);
					break;

		case 4:	printf("Enter the source string:\n");
					fgets(input,100,stdin);
					printf("Enter the destination string:\n");
					fgets(output,100,stdin);
					string_concat(output,input);
					printf("The concatenated string is: %s\n",output);
					break;

		default:	printf("Invalid selection.\n");
					break;
	}

	return 0;
}


int string_length(char *ptr)
{
	int sum = 0;

	while(*ptr != '\n')
	
		sum++;
		ptr++;
	

	return sum;
}
int string_copy(char *dptr, char *sptr)
{
	while(*sptr != '\n')
	
		*dptr = *sptr;
		dptr++;
		sptr++;
	

	*dptr = '\0';

	return 0;
}


int string_ncopy(char *dptr, char *sptr, int n)
{
	int i;
	
	for(i = 0; (i < n) && (*sptr != '\n') ; i++)
	
		*dptr = *sptr;
		sptr++;
		dptr++;
	
	for(dptr++ ; i < n ; i++)
	
		*dptr = '\0';
		dptr++;
	

	return 0;
}

int string_concat(char *dptr,char *sptr)
{
	int length = (string_length(dptr) - 1);

	while(*sptr != '\n')
	
		dptr[++length] = *sptr;
		++sptr;
	

	dptr[++length] = '\0';

	return 0;
}
