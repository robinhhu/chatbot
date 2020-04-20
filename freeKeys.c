#include "datastructure.h"
#include <stdio.h>
#include <stdlib.h>

void freeKeys(Key *header)
{
	if(header != NULL)
	{
		freeKeys(header->next);
		header->next = NULL;
		free(header);
	}
	return;
}
