#include "Rangechecker.h"
#include <assert.h>
#include "A2DConversion.h"

int main()
{
    TestSortedarray();
    TestOutputrange();
    TestA2Dconversion();
}



int TestSortedarray()
{
    /*case1*/
    {
        int inputarray[] = {4, 9, 5, 3, 11, 12, 10, 13};
        int arraylength = ((sizeof(inputarray)) / sizeof(inputarray[0]));
        int *sortedarrayRef = sortinputarray(inputarray, arraylength);

        assert(sortedarrayRef[0] == 3);
        assert(sortedarrayRef[7] == 13);

        return 0;
    }
    /*case2*/
    {
        int inputarray[] = {8, 7, 6, 5, 15, 17, 16};
        int arraylength = ((sizeof(inputarray)) / sizeof(inputarray[0]));
        int *sortedarrayRef = sortinputarray(inputarray, arraylength);
        assert(sortedarrayRef[0] == 5);
        assert(sortedarrayRef[6] == 17);
    }
}

int TestOutputrange()
{
    {
        /*case1*/
        int inputarray[] = {4, 9, 5, 3, 11, 10};
        int arraylength = ((sizeof(inputarray)) / sizeof(inputarray[0]));
        int *sortedarray = sortinputarray(inputarray, arraylength);
        range rangelist[] = {0, 0, 0};
        checkrangesofsortedarray(rangelist, sortedarray, arraylength);
        assert( strcmp(getrangeincsvformat(rangelist, 0), "3-5, 3")==0);
        assert( strcmp(getrangeincsvformat(rangelist, 1), "9-11, 3")==0);

        return 0;
    }
}

 //Test Case for A2D Conversion
 int TestA2Dconversion()
 {
    /*case1*/
    assert(A2Dconverter(10,1146,12) == 3);
    /*case2*/
    assert(A2Dconverter(10,1600,12) == 4);
 }
