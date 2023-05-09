#include <stdio.h>
int is_palindrome (char *str)

{

int i,j=0,length;

for(i=0; str[i] =! '\0'; i++)

{
length=length+1;

}

for(i=0;i<length/2; i++)

{

if(str[i]==str[length-1-i])

{

j++;

}

}

if(j==i)

return 1;

else

return 0;

}

int main()
{
char str[100];
scanf("%s", str);

if(is_palindrome (str))

printf("Palindrome");

else

printf("Not Palindrome" );

return 0;

}

