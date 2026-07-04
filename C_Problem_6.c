#include <stdio.h>
int main()
{
    int num,digit;
    printf("Enter an integer:");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        printf("%c\n",digit+'0');
        num=num/10;
    }
}
