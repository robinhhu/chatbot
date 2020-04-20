// The training data structure
#define MAX_STRING_LENGTH 20
#define MAX_STRING_NUMBER 20
//#define MAX_ANSWER_LENGTH 50

struct data {
	int index;
	int numwords;
	char *className;
	char *answer;
	struct data *next;
	char words[MAX_STRING_NUMBER][MAX_STRING_LENGTH];
};
typedef struct data Key;
