// type 2 : Has Return + No Parameter
#include <stdio.h>
int sum()
//sum function have No Parameter is there
{
    int b,d,sum1;
    scanf("%d %d",&b,&d);
    sum1=b+d;
    return sum1;
// sum function return the value for main function
}
int main()
{
    int S=sum();
// main funtion not pass any value as a Parameter
    printf("%d",S);
    return 0;
}