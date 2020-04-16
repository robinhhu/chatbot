// The main loop
#include "datastructure.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "readinput.h"
#include "writeoutput.h"

int main()
{
	printf("chatbot:Hi!\n>>");
	char input[100];
	fgets(input,100,stdin);
	while(strcmp(input,"exit\n"))
	{
		fputs(input,stdout);
		printf(">>");
		fgets(input,100,stdin);
	}
	return 0;
}
