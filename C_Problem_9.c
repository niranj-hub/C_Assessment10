#include <stdio.h>
int main()
{
    char str[50];
    int i;
    i=0;
    printf("Enter a string:");
    scanf("%s",str);
    while(str[i]=='0')
    {
        i++;
    }
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
