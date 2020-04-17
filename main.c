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
	char output[100][20];
	Key *header = malloc(sizeof(Key));
	loadLibrary(header);
	fgets(input,100,stdin);
	while(strcmp(input,"exit\n"))
	{
		int count = modifyInput(output,input);
		int i = 0;
		for(;i < count;i ++)
		{
			printf("%s\n",output[i]);
		}
		printf("%d\n",findMax(output,header,count));
		//fputs(findMax(output,header),stdout);
		printf(">>");
		fgets(input,100,stdin);
	}
	return 0;
}
