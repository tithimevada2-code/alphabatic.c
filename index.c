#include<stdio.h>
int main()
{
    char ch='a';
    do
        {
            printf("%c",ch);
            ch = ch + 4;
        } while (ch <='z');
    return 0;
}


#include<stdio.h>
int main()
{
    int num, count=0;
    printf("enter a number:");
    scanf("%d", &num);
    if (num==0)
    {
        count =1;
    }
    else
    {
        while(num!=0)
            {
                num=num/10;
                count++;
            }
    }
    printf("Total number of digits +%d", count);

    return 0;
}