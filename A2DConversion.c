#include "A2DConversion.h"

int A2Dconverter(int MaxAmp,int A2DValue,int BitResolution)
{
  int Ampere = invalid;
  A2DValue = abs(A2DValue);
  int MaxA2DValue = pow(2,BitResolution) - 2;
  
  if(A2DValue <= MaxA2DValue)
  {
    float ConvertedValue = (float)MaxAmp * (float)A2DValue / (float)MaxA2DValue;
    Ampere = round(ConvertedValue);
  }
  return Ampere;
}