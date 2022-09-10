#include "stdio.h"
#include "string.h"

typedef struct
{
    int startindex;
    int endindex;
    int rangecount;
}range;

//void sortgivenlist(int *Range, int noOfElements, int received_position) ;
void swap(int* x, int* y);
int *sortinputarray(int *list, int size);
int checkrangesofsortedarray(range * rangelist, int *sortedlist, int size);
//void printrangeonconsole(range *rangelist, int size);
char *getrangeincsvformat(range *rangelist, int index);

int TestSortedarray();
int TestOutputrange();
int TestA2Dconversion();