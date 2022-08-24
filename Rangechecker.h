#include "stdio.h"
#include "string.h"

struct range
{
    int startindex;
    int endindex;
    int rangecount;
}range;

void sortgivenlist(int *Range, int noOfElements, int received_position) ;
void swap(int* x, int* y);
int *sortinputarray(int *list, int size);
int *checkrangesofsortedarray(int *sortedlist, int size);
void printrangeonconsole(struct range *rangelist, int size);
char *getrangeincsvformat(struct range *rangelist, int index);

