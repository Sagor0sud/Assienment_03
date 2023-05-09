// type 1 : Has Return + Parameter
#include <stdio.h>
int multpi(int a ,int b)
// there multpi is a function,
//multpi have 2 Parameter a and b
{
    int value=a*b;
    return value;
//multpi function return the value for main function
}
int main()
{
    int M = multpi(8,2);
// main function passing 2 value as a Parameter
    printf("%d\n",M);
    return 0;
}