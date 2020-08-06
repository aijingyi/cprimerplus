#include <stdio.h>
#define MSG "I am symbolic string constant."
#define MAXLENGTH 81
int main()
{
	char words[] = "I am s tring in an array.";
	const char * pt1 = "Something is pointing at me.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	puts("Here are some strings:");
	puts(MSG);
	puts(words);
	puts(pt1);
	words[8] = 'p';
	puts(words);
	int sss = sizeof( pt1);
	printf("*pt1=%d\n", sss);
	return 0;

}
