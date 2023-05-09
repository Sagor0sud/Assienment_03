#include <stdio.h>
#include <string.h>
int is_palindrome(char *str) 
{
    int i,j = 0,len = 0;
    len = strlen(str);
    for (i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - 1 - i]) 
        {
            return 0;
        }
    }   
    return 1; 
}

int main() 
{
    char str[10];
    scanf("%s",str);
    
    if (is_palindrome(str)) 
    {
        printf("Palindrome\n");
    } 
    else 
    {
        printf("Not Palindrome\n");
    }
    return 0;
}