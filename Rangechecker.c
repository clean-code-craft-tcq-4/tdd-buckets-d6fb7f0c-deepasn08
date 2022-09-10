#include "Rangechecker.h"

int * sortinputarray(int *list, int size){
    int i, j, temp;
    for (i = 0; i < size - 1; ++i)
    {
        for (j = 0; j < size - 1 - i; ++j )
        {
            if (list[j] > list[j+1])
            {
                temp = list[j+1];
                list[j+1] = list[j];
                list[j] = temp;
            }
        }
    }

    return list;    
}


int checkrangesofsortedarray(range * rangelist, int *sortedlist, int size){
     
    int no_of_Ranges = 0;
    rangelist[no_of_Ranges].startindex = sortedlist[0];
    rangelist[no_of_Ranges].rangecount = 1;
    for (int index = 0; index < size; index++)
    {
        if ((sortedlist[index] == sortedlist[index + 1]) || (sortedlist[index] + 1 == sortedlist[index + 1]))
        {
            rangelist[no_of_Ranges].endindex = sortedlist[index + 1];
            rangelist[no_of_Ranges].rangecount = rangelist[no_of_Ranges].rangecount+1;
        }
        else
        {
            ++no_of_Ranges;
            rangelist[no_of_Ranges].rangecount = 1;
            rangelist[no_of_Ranges].startindex = sortedlist[index + 1];
        }
    }

    return 0;
}

/*void printrangeonconsole(range *rangelist, int size){
    for(int i=0;i<size;i++)
    {
    printf("\n Range %d - %d , %d", rangelist[i].startindex, rangelist[i].endindex, rangelist[i].rangecount);
    }
}*/

char *getrangeincsvformat(range *rangelist, int index){
    char s1[15],s2[15],s3[15];
    sprintf(s1, "%d", (rangelist[index].startindex));
    sprintf(s2, "%d", (rangelist[index].endindex));
    sprintf(s3, "%d", (rangelist[index].rangecount));
    char *string1 = strcat(s1,"-");
    char *string2 = strcat(string1, s2);
    char *string3 = strcat(string2, ", ");
    char *string4 = strcat(string3, s3);
    return string4;
}
