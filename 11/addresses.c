#include <stdio.h>

#define MSG "I'm special"

int main()
{
	char ar[] =MSG;
	const char *pt =MSG;
	printf("address of \"I'm special\": %p \n", "I'm special");
	printf("	adress ar: %p\n",ar);
	printf("	adress pt: %p\n",pt);
	printf("	adress of MSG: %p\n",MSG);
	printf("adress of \"i'm special\": %p\n","I'm special");

	return 0;

}
