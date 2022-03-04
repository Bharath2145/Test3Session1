#include<stdio.h>
struct_fraction
{
  int num, den;
};
typedef struct_fraction Fraction;
Fraction input_fraction()
{
  Fraction f:
  printf("enter the fraction\n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
Fraction find smallest(Fraction f1,Fraction f2,Fraction f3)
{
  int common_denominator = f1.den * f2.den * f3.den;
  int num1 = f1.num*common_denominator/f1.den;
  int num2 = f2.num*common_denominator/f2.den;
  int num3 = f3.num*common_denominator/f3.den;
  if(num1<num2&&num1<num3)
  {
    return num1;
  }
  else if(num2<num3)
  {
    retun num2;
  }
  else
  {
    retun num3;
  }
}
void output(fraction f1,fraction f2,fraction f3,Fraction smallest)
{
  printf("the smallest of %d/%d,%d/%d,%d/%d is %d/%d\n",f1num,f1den,f2num,f2den,f3num,f3den,smallest.num,smallest.den);
}
int main()
{
  Fraction f1,f2,f3,smallest;
  f1 = input();
  f2 = input();
  f3 = input();
  smallest = smallest(f1,f2,f3);
  output (f1,f2,f3, smallest);
  return 0;
}