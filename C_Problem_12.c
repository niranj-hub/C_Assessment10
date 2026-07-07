#include <stdio.h>
int main()
{
    int arr[50],i;
    char str[50];
    printf("Enter the array elements:");
    for(i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
        str[i]=arr[i]+'0';
    }
    str[i]='\0';
    printf("%s",str);
}
