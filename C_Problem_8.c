#include <stdio.h>
int main()
{
    char str[50];
    int i,valid;
    i=0;
    valid=1;
    printf("Enter a string:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]<'0' || str[i]>'9')
        {
            valid=0;
            break;
        }
        i++;
    }
    if(valid==1)
        printf("Valid number");
    else
        printf("Invalid number");
}
