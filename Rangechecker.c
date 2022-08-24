#include "Rangechecker.h"

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int *sortinputarray(int *list, int size){
int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < size - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < size; j++)
            if (list[j] < list[min_idx])
                min_idx = j;
        swap(&list[min_idx], &list[i]);
    }

    return &list;
}


int *checkrangesofsortedarray(int *sortedlist, int size){
int no_of_Ranges = 0;
	
struct range rangelist[10]; 
	
rangelist[no_of_Ranges].startindex = sortedlist[0]; 
	
	for(int index = 0; index < size-1; index++) {
		if((sortedlist[index] == sortedlist[index+1]) || (sortedlist[index]+1 == sortedlist[index+1]))
		{
			rangelist[no_of_Ranges].endindex = sortedlist[index+1];
			++rangelist[no_of_Ranges].rangecount; 
		}
		else
		{	
			++no_of_Ranges;
			rangelist[no_of_Ranges].startindex = sortedlist[index+1];
		}
	}

    return &rangelist;
}

void printrangeonconsole(struct range *rangelist, int size){
    for(int i=0;i<size;i++)
    {
    printf("\n Range %d - %d , %d", rangelist[i].startindex, rangelist[i].endindex, rangelist[i].rangecount);
    }
}

char *getrangeincsvformat(struct range *rangelist, int index){
char s1[6],s2[6],s3[6],s4[6];
sprintf(s1, "%d", (rangelist[index].startindex));
sprintf(s2, "%d", (rangelist[index].endindex));
sprintf(s3, "%d", (rangelist[index].rangecount));
char string1 = strcat(s1,"-");
char string2 = strcat(string1, s2);
char string3 = strcat(string2, ", ");
char string4 = strcat(string3, s3);
return string4;
}