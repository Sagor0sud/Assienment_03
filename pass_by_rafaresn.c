// a method of passing the address of an argument in the calling function to a corresponding parameter in the called function

#include <stdio.h>
void Pass_by_refarsen(int * k)
{
    *k=500;

}
int main()
{
    int m=200;
    Pass_by_refarsen(&m);
    printf("%d",m);
    return 0;
}