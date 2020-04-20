void loadLibrary(Key *header);
int isIn(char src[20], char wordsList[][20],int numwords);
float countScore(char src[][20], char wordsList[][20],int inlist,int numwords);
int findMax(char src[][20],Key *header,int count);
char *returnReply(char src[][20],Key *header,int count);
