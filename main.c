// The main loop
#include "datastructure.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "readinput.h"
#include "writeoutput.h"
#include "freeKeys.h"

int main()
{
	printf("chatbot:Hi! (type \"exit\" to exit)\n>>");
	char input[100];
	char output[100][20];
	Key *header = malloc(sizeof(Key));
	loadLibrary(header);
	fgets(input,100,stdin);
	while(strcmp(input,"exit\n"))
	{
		int count = modifyInput(output,input);
		printf("%s\n",returnReply(output,header,count));
		printf(">>");
		fgets(input,100,stdin);
	}
	freeKeys(header);
	return 0;
}
