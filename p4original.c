#include<stdio.h>
float evaluate_polynomial(int n, float f[n],float x)
{
  float result = f[n-1];
  for(i=n;i>=0;i--);
  {
    result = result *x;
    result = result + f[i-1];
  }
  result;
}