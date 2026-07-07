#include <stdio.h>
int main()
{
    char str[50];
    int arr[50],i=0;
    printf("Enter a number:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        arr[i]=str[i]-'0';
        i++;
    }
    i = 0;
    while(str[i]!='\0')
    {
        printf("%d ",arr[i]);
        i++;
    }
}
