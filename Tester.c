#include "Rangechecker.h"
#include "assert"

int main()
{
    TestSortedarray();
    TestOutputrange();
}

void TestSortedarray(){
/*case1*/
{
    int inputarray[] = {4,9,5,3,11,12,10,13};
    int arraylength = ((sizeof(inputarray))/sizeof(inputarray[0]));
    int sortedarray[] = sortinputarray(*inputarray, arraylength);
    assert(sortedarray[0] == 3);
    assert(sortedarray[6] == 13);
}
/*case2*/
{
    int inputarray[] = {8,7,6,5,15,17,16};
    int arraylength = ((sizeof(inputarray))/sizeof(inputarray[0]));
    int sortedarray[] = sortinputarray(*inputarray, arraylength);
    assert(sortedarray[0] == 5);
    assert(sortedarray[6] == 17);
}
}

void TestOutputrange(){
    {
      /*case1*/
    int inputarray[] = {4,9,5,3,11,12,10};
    int arraylength = ((sizeof(inputarray))/sizeof(inputarray[0]));
    int sortedarray[] = sortinputarray(*inputarray, arraylength); 
    struct range rangelist[] = checkrangesofsortedarray(*sortedarray, arraylength);
    assert(getrangeincsvformat(rangelist,0) == "3-5, 3");
    assert(getrangeincsvformat(rangelist,1) == "9-12, 4");
    }
}
