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
	strcpy(greeting->words[0],"hi");
	strcpy(greeting->words[1],"hello");
	strcpy(greeting->words[2],"day");
	strcpy(greeting->words[3],"how");
	strcpy(greeting->words[4],"are");
	strcpy(greeting->words[5],"you");
	strcpy(greeting->words[6],"morn");
	strcpy(greeting->words[7],"afternoon");
	strcpy(greeting->words[8],"even");
	strcpy(greeting->words[9],"today"); 
	strcpy(greeting->words[10],"is");
	strcpy(greeting->words[11],"your");
	strcpy(greeting->words[12],"good");
	strcpy(greeting->words[13],"it");
	strcpy(greeting->words[14],"go");
	strcpy(greeting->words[15],"do");
	// goodbye
	goodbye->index = index ++;
	goodbye->numwords = 13;
	goodbye->className = "goodbye";
	goodbye->answer = "Bye!";
	goodbye->next = food;
	strcpy(goodbye->words[0],"later");
	strcpy(goodbye->words[1],"tomorrow");
	strcpy(goodbye->words[2],"bye");
	strcpy(goodbye->words[3],"soon");
	strcpy(goodbye->words[4],"see");
	strcpy(goodbye->words[5],"nic");
	strcpy(goodbye->words[6],"day");
	strcpy(goodbye->words[7],"hav");
	strcpy(goodbye->words[8],"a");
	strcpy(goodbye->words[9],"talk");
	strcpy(goodbye->words[10],"to");
	strcpy(goodbye->words[11],"you");
	strcpy(goodbye->words[12],"good");
	// food
	food->index = index ++;
	food->numwords = 19;
	food->className = "food";
	food->answer = "Spaghetti sounds great";
	food->next = opinion;
	strcpy(food->words[0],"eat");
	strcpy(food->words[1],"food");
	strcpy(food->words[2],"breakfast");
	strcpy(food->words[3],"dinner");
	strcpy(food->words[4],"lunch");
	strcpy(food->words[5],"taste");
	strcpy(food->words[6],"sandwich");
	strcpy(food->words[7],"hungry");
	strcpy(food->words[8],"today");
	strcpy(food->words[9],"mak");
	strcpy(food->words[10],"what");
	strcpy(food->words[11],"about");
	strcpy(food->words[12],"can");
	strcpy(food->words[13],"you");
	strcpy(food->words[14],"me");
	strcpy(food->words[15],"a");
	strcpy(food->words[16],"let");
	strcpy(food->words[17],"us");
	strcpy(food->words[18],"hav");
	// option
	opinion->index = index ++;
	opinion->numwords = 15;
	opinion->className = "opinion";
	opinion->answer = "What answer would please you the most?";
	opinion->next = NULL;
	strcpy(opinion->words[0],"suggestion");
	strcpy(opinion->words[1],"prefer");
	strcpy(opinion->words[2],"opinion");
	strcpy(opinion->words[3],"think");
	strcpy(opinion->words[4],"your");
	strcpy(opinion->words[5],"tell");
	strcpy(opinion->words[6],"fit");
	strcpy(opinion->words[7],"mor");
	strcpy(opinion->words[8],"how");
	strcpy(opinion->words[9],"about");
	strcpy(opinion->words[10],"what");
	strcpy(opinion->words[11],"do");
	strcpy(opinion->words[12],"you");;
	strcpy(opinion->words[13],"me");
	strcpy(opinion->words[14],"i");
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
			return i + 1;
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
		int index = isIn(src[i],wordsList,numwords);
		if(index != 0)
			count += 1.0/index;
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
		//printf("classname:%s,score:%f\n",temp->className,countScore(src,temp->words,count,temp->numwords));
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
char *returnReply(char src[][20],Key *header,int count)
{
	int index = findMax(src,header,count);
	Key *temp = header->next;
	while(temp)
	{
		if(temp->index == index)
			return temp->answer;
		temp = temp->next;
	}
	return "Tell me more";
}
