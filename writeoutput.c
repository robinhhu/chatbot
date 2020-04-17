// Return output to user
#include "datastructure.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "writeoutput.h"

// Create a linked list
void loadLibrary(Key *header)
{
	int index = 0;
	Key *greeting = (Key *)(malloc(sizeof(Key)));
	Key *goodbye = (Key *)(malloc(sizeof(Key)));
	Key *food = (Key *)(malloc(sizeof(Key)));
	Key *opinion = (Key *)(malloc(sizeof(Key)));
	// greeting 
	header->next = greeting;
	greeting->index = index ++;
	greeting->numwords = 16;
	greeting->className = "greeting";
	greeting->answer = "How do you do?";
	greeting->next = goodbye;
	strcpy(greeting->words[0],"how");
	strcpy(greeting->words[1],"ar");
	strcpy(greeting->words[2],"you"); 
	strcpy(greeting->words[3],"is");
	strcpy(greeting->words[4],"your");
	strcpy(greeting->words[5],"day");
	strcpy(greeting->words[6],"good");
	strcpy(greeting->words[7],"it");
	strcpy(greeting->words[8],"go");
	strcpy(greeting->words[9],"do");
	strcpy(greeting->words[10],"hi");
	strcpy(greeting->words[11],"hello");
	strcpy(greeting->words[12],"morn");
	strcpy(greeting->words[13],"afternoon");
	strcpy(greeting->words[14],"even");
	strcpy(greeting->words[15],"today");
	// goodbye
	goodbye->index = index ++;
	goodbye->numwords = 13;
	goodbye->className = "goodbye";
	goodbye->answer = "Bye!";
	goodbye->next = food;
	strcpy(goodbye->words[0],"hav");
	strcpy(goodbye->words[1],"a");
	strcpy(goodbye->words[2],"nic");
	strcpy(goodbye->words[3],"day");
	strcpy(goodbye->words[4],"see");
	strcpy(goodbye->words[5],"later");
	strcpy(goodbye->words[6],"talk");
	strcpy(goodbye->words[7],"to");
	strcpy(goodbye->words[8],"you");
	strcpy(goodbye->words[9],"soon");
	strcpy(goodbye->words[10],"bye");
	strcpy(goodbye->words[11],"tomorrow");
	strcpy(goodbye->words[12],"good");
	// food
	food->index = index ++;
	food->numwords = 18;
	food->className = "food";
	food->answer = "Sandwich or spaghetti?";
	food->next = opinion;
	strcpy(food->words[0],"can");
	strcpy(food->words[1],"you");
	strcpy(food->words[2],"mak");
	strcpy(food->words[3],"me");
	strcpy(food->words[4],"a");
	strcpy(food->words[5],"sandwich");
	strcpy(food->words[6],"let");
	strcpy(food->words[7],"us");
	strcpy(food->words[8],"hav");
	strcpy(food->words[9],"today");
	strcpy(food->words[10],"what");
	strcpy(food->words[11],"about");
	strcpy(food->words[12],"breakfast");
	strcpy(food->words[13],"dinner");
	strcpy(food->words[14],"lunch");
	strcpy(food->words[15],"eat");
	strcpy(food->words[16],"food");
	strcpy(food->words[17],"taste");
	// exercise
	opinion->index = index ++;
	opinion->numwords = 15;
	opinion->className = "opinion";
	opinion->answer = "What answer would please you the most?";
	opinion->next = NULL;
	strcpy(opinion->words[0],"how");
	strcpy(opinion->words[1],"what");
	strcpy(opinion->words[2],"about");
	strcpy(opinion->words[3],"do");
	strcpy(opinion->words[4],"you");
	strcpy(opinion->words[5],"suggestion");
	strcpy(opinion->words[6],"think");
	strcpy(opinion->words[7],"tell");
	strcpy(opinion->words[8],"me");
	strcpy(opinion->words[9],"your");
	strcpy(opinion->words[10],"opinion");
	strcpy(opinion->words[11],"i");
	strcpy(opinion->words[12],"prefer");
	strcpy(opinion->words[13],"fit");
	strcpy(opinion->words[14],"more");
}


// Whether the string input in the word list
// If is in, return 1
// Else return 0
int isIn(char src[20], char wordsList[][20],int numwords)
{
	int i = 0;
	for(;i < numwords;i ++)
	{
		if(strcmp(src,wordsList[i]) == 0)
			return 1;
	}
	return 0;
}


// Count the score for a given string list
// With a class string value
float countScore(char src[][20], char wordsList[][20],int inlist,int numwords)
{
	int i = 0;
	float count = 0;
	for(;i < inlist;i ++)
	{
		if(isIn(src[i],wordsList,numwords) == 1)
			count += 1;
	}
	return count;
}


// Find the max countScore in the linked list
// Return the index
int findMax(char src[][20],Key *header,int count)
{
	int index = 0;
	float max = 0;
	Key *temp = header->next;
	while(temp)
	{
		printf("classname:%s,score:%f\n",temp->className,countScore(src,temp->words,count,temp->numwords));
		if(countScore(src,temp->words,count,temp->numwords) > max)
		{
			index = temp->index;
			max = countScore(src,temp->words,count,temp->numwords);
		}
		temp = temp->next;
	}
	return index;
}    


// Return the desired relpy
char *returnReply(int index)
{
	return NULL;
}
