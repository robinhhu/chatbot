// The training data structure

struct data {
	int index;
	char className[15];
	char answer[30];
	struct data *next;
	char words[][20];
};
typedef struct data Key;
