#include<stdio.h>
#include<string.h>
#include<assert.h>

int vowel_occur(char *, char);

int main()
{
	int total_vowels;
	char input[100],ch;

	printf("Enter a string:\n");
	fgets(input,100,stdin);
	printf("Enter the vowel you want to check:\n");
	scanf("%c",&ch);

	total_vowels = vowel_occur(input,ch);
	printf("%c occurs %d times in the given string.\n",ch,total_vowels);

	assert(vowel_occur("There are 7 es in this sentence.",'e') == 7);

	return 0;
}

int vowel_occur(char *ptr, char ch)
{
	int count = 0;

	while(*ptr != '\0')
	{
		if(*ptr == ch)
			count++;
		
		ptr++;
	}

	return count;
}
