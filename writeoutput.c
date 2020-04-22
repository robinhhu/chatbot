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
	Key *feelings = (Key *)(malloc(sizeof(Key)));
	Key *reasons = (Key *)(malloc(sizeof(Key)));
	Key *questions = (Key *)(malloc(sizeof(Key)));
	Key *request = (Key *)(malloc(sizeof(Key)));
	Key *weather = (Key *)(malloc(sizeof(Key)));
	Key *name = (Key *)(malloc(sizeof(Key)));
	Key *apologize = (Key *)(malloc(sizeof(Key)));
	// greeting 
	header->next = greeting;
	greeting->index = index ++;
	greeting->numwords = 16;
	greeting->answer = "How do you do?";
	greeting->next = goodbye;
	strcpy(greeting->words[0],"hi");
	strcpy(greeting->words[1],"hello");
	strcpy(greeting->words[2],"day");
	strcpy(greeting->words[3],"how");
	strcpy(greeting->words[4],"you");
	strcpy(greeting->words[5],"morn");
	strcpy(greeting->words[6],"afternoon");
	strcpy(greeting->words[7],"even");
	strcpy(greeting->words[8],"today"); 
	strcpy(greeting->words[9],"you");
	strcpy(greeting->words[10],"is");
	strcpy(greeting->words[11],"your");
	strcpy(greeting->words[12],"good");
	strcpy(greeting->words[13],"it");
	strcpy(greeting->words[14],"go");
	strcpy(greeting->words[15],"do");
	// goodbye
	goodbye->index = index ++;
	goodbye->numwords = 13;
	goodbye->answer = "Bye!";
	goodbye->next = food;
	strcpy(goodbye->words[0],"later");
	strcpy(goodbye->words[1],"bye");
	strcpy(goodbye->words[2],"goodbye");
	strcpy(goodbye->words[3],"soon");
	strcpy(goodbye->words[4],"see");
	strcpy(goodbye->words[5],"nic");
	strcpy(goodbye->words[6],"day");
	strcpy(goodbye->words[7],"hav");
	strcpy(goodbye->words[8],"a");
	strcpy(goodbye->words[9],"tomorrow");
	strcpy(goodbye->words[10],"to");
	strcpy(goodbye->words[11],"you");
	strcpy(goodbye->words[12],"talk");
	// food
	food->index = index ++;
	food->numwords = 19;
	food->answer = "Sandwich and spaghetti are all sounds great!";
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
	opinion->numwords = 16;
	opinion->answer = "What answer would please you the most?";
	opinion->next = feelings;
	strcpy(opinion->words[0],"suggestion");
	strcpy(opinion->words[1],"prefer");
	strcpy(opinion->words[2],"opinion");
	strcpy(opinion->words[3],"or");
	strcpy(opinion->words[4],"think");
	strcpy(opinion->words[5],"your");
	strcpy(opinion->words[6],"tell");
	strcpy(opinion->words[7],"fit");
	strcpy(opinion->words[8],"mor");
	strcpy(opinion->words[9],"how");
	strcpy(opinion->words[10],"about");
	strcpy(opinion->words[11],"what");
	strcpy(opinion->words[12],"do");
	strcpy(opinion->words[13],"you");;
	strcpy(opinion->words[14],"me");
	strcpy(opinion->words[15],"i");
	// feelings
	feelings->index = index ++;
	feelings->numwords = 15;
	feelings->answer = "Why you feel that way?";
	feelings->next = reasons;
	strcpy(feelings->words[0],"feel");
	strcpy(feelings->words[1],"fine");
	strcpy(feelings->words[2],"afraid");
	strcpy(feelings->words[3],"bor");
	strcpy(feelings->words[4],"sad");
	strcpy(feelings->words[5],"lif");
	strcpy(feelings->words[6],"people");
	strcpy(feelings->words[7],"funny");
	strcpy(feelings->words[8],"man");
	strcpy(feelings->words[9],"alike");
	strcpy(feelings->words[10],"it");
	strcpy(feelings->words[11],"is");
	strcpy(feelings->words[12],"all");
	strcpy(feelings->words[13],"so");
	strcpy(feelings->words[14],"why");
	// reasons
	reasons->index = index ++;
	reasons->numwords = 15;
	reasons->answer = "So you are telling me the reason";
	reasons->next = questions;
	strcpy(reasons->words[0],"because");
	strcpy(reasons->words[1],"since");
	strcpy(reasons->words[2],"reason");
	strcpy(reasons->words[3],"tell");
	strcpy(reasons->words[4],"it");
	// questions
	questions->index = index ++;
	questions->numwords = 14;
	questions->answer = "It depends, lets talk about you.";
	questions->next = request;
	strcpy(questions->words[0],"intelligent");
	strcpy(questions->words[1],"nam");
	strcpy(questions->words[2],"how");
	strcpy(questions->words[3],"can");
	strcpy(questions->words[4],"where");
	strcpy(questions->words[5],"is");
	strcpy(questions->words[6],"who");
	strcpy(questions->words[7],"when");
	strcpy(questions->words[8],"where");
	strcpy(questions->words[9],"what");
	strcpy(questions->words[10],"which");
	strcpy(questions->words[11],"com");
	strcpy(questions->words[12],"from");
	strcpy(questions->words[13],"you");
	strcpy(questions->words[14],"your");
	strcpy(questions->words[15],"are");
	// request
	request->index = index ++;
	request->numwords = 12;
	request->answer = "Sure.";
	request->next = weather;
	strcpy(request->words[0],"please");
	strcpy(request->words[1],"could");
	strcpy(request->words[2],"let");
	strcpy(request->words[3],"help");
	strcpy(request->words[4],"me");
	strcpy(request->words[5],"for");
	strcpy(request->words[6],"would");
	strcpy(request->words[7],"mind");
	strcpy(request->words[8],"me");
	strcpy(request->words[9],"out");
	strcpy(request->words[10],"check");
	strcpy(request->words[11],"book");
	// weather
	weather->index = index ++;
	weather->numwords = 9;
	weather->answer = "It's going to be sunny. Let's talk about something else.";
	weather->next = name;
	strcpy(weather->words[0],"weather");
	strcpy(weather->words[1],"will");
	strcpy(weather->words[2],"sun");
	strcpy(weather->words[3],"sunny");
	strcpy(weather->words[4],"rain");
	strcpy(weather->words[5],"rainy");
	strcpy(weather->words[6],"cloudy");
	strcpy(weather->words[7],"next");
	strcpy(weather->words[8],"outside");
	// name
	name->index = index ++;
	name->numwords = 3;
	name->answer = "Robin calls me Eric. But I prefer to be Simon.";
	name->next = apologize;
	strcpy(name->words[0],"nam");
	// apologize
	apologize->index = index ++;
	apologize->numwords = 4;
	apologize->answer = "That's OK.";
	apologize->next = NULL;
	strcpy(apologize->words[0],"thank");
	strcpy(apologize->words[1],"sorry");
	strcpy(apologize->words[2],"apologize");
	strcpy(apologize->words[3],"apology");
}


// Whether the string input in the word list
// If is in, return the position
// Else return 0
int isIn(char src[20], char wordsList[][20],int numwords)
{
	int i = 0;
	for(;i < numwords;i ++)
	{
		if(strcmp(src,wordsList[i]) == 0)
			return i + 1;
		//int j = 0;
		//for(;wordsList[i][j] != 0;j ++)
		//{
		//	if(src[i] != wordsList[i][j])
		//		break;
		//	else if(wordsList[i][j + 1] == 0)
		//		return i + 1;
		//}
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
