//type 3 : No Return + Parameter
#include <stdio.h>
void divison(int j,int k)
   // divison function have 2 Parameter j and k
{
    int d=j/k;
    printf("%d\n",d);
    // divison function nathing to return there
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    divison(m,n);
    // main function passing 2 value as a Parameter
    return 0;
}