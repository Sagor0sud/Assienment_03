//type 4 : No Return + No Parameter
#include <stdio.h>
void mod(void)
// function have No Parameter is there
{
    int x,y;
    scanf("%d %d",&x,&y);
    int D= x%y;
    printf("%d",D);
    // function nathing to return there
}
int main()
{
    mod();
    // main funtion not pass any value as a Parameter
    return 0;
}