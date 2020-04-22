// Read input from user
#include "datastructure.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "readinput.h"

// Remove the punctuation in the initial input
// And change the input into lower case
void normalizeInput(char initialinput[])
{
	char *input = initialinput, *output = initialinput;
	while(*input)
	{
		if(ispunct(*input))
			input ++;
		else if(isupper(*input))
			*output++ = tolower(*input++);
		else
			*output ++ = *input ++;
	}
	*output = 0;
	return;
}

// Split a lone sentence into list of words
// Return words number
// Return -1 if something goes wrong
int splitWords(char output[][20], char input[])
{
	int count = 0;
	char temp[20];
	if(input == NULL || strlen(input) == 0)
		return -1;
	int i = 0,index = 0;
	while(1)
	{
		if(input[i] != ' ' && input[i] != ',' && input[i] != '\0' && input[i] != '\n')
			temp[index ++] = input[i];
		else if(index != 0)
		{
			temp[index] = '\0';
			strcpy(output[count ++],temp);
			index = 0;
		}
		if(input[i ++] == '\0')
			break;
	}
	return count;
}

// If the source string end with the end string,
// return the index the first letter in end appears
// else return -1
int endWith(char *src, char *end)
{
	if (strlen(end) > strlen(src))
        	return -1;
	if(strncmp(src + strlen(src) - strlen(end), end, strlen(end)) == 0)
		return strlen(src) - strlen(end);
	else
		return -1;
}


// Stem words. E.g. change "having" to "hav"
void stemWords(char input[])
{
	int ing = endWith(input,"ing");
	int s = endWith(input,"s");
	int d = endWith(input,"d");
	int e = endWith(input,"e");
	if(ing != -1) 
	{
		if(input[ing - 1] == input[ing - 2])
			input[ing - 1] = '\0';
		else
			input[ing] = '\0';
	}
	else if(s != -1 && strlen(input) > 2)
	{
		int es = endWith(input,"es");
		if(es != -1)
			input[es] = '\0';
		else
			input[s] = '\0';		
	}
	else if(d != -1)
	{
		int ed = endWith(input,"ed");
		if(ed != -1)
			input[ed] = '\0';
		else
			input[s] = '\0';	
	}
	else if(e != -1 && strlen(input) < 5 && strlen(input) > 3)
		input[e] = '\0';
	return;	
}

// Change input into list of modified word list
int modifyInput(char output[][20], char input[])
{
	normalizeInput(input);
	int wordsCount = splitWords(output,input);
	int i = 0;
	for(;i < wordsCount;i ++)
		stemWords(output[i]);
	return wordsCount;
}




