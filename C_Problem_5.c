#include <stdio.h>
int main() 
{
    int num;
    char str[100];
    printf("Enter a number:");
    scanf("%d",&num);
    sprintf(str,"%d",num);
    printf("%s",str);
}
