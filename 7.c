#include<stdio.h>
#include<string.h>
#include<assert.h>

int vowel_count(char *);

int main()
{
	char input[100];
	int total;

	printf("Enter the string:\n");
	fgets(input,100,stdin);

	total = vowel_count(input);
	printf("There are %d vowels in the given string.\n",total);

	assert(vowel_count("AEIOU Test") == 6);

	return 0;
}

int vowel_count(char *ptr)
{
	int count = 0;

	while(*ptr != '\0')
	{
		switch(*ptr)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': 
			count++; 
			ptr++; 
			break;
			default:ptr++;
			break;
		}
	}

	return count;
}
