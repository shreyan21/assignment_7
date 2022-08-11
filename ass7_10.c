#include<stdio.h>
#include<conio.h>
#include<math.h>
int isArmstrong(int b)
{
    int c=b;
    int a=b;
    int sum=0;
    int count=0;
    while(b)
    {
        b/=10;
        count++;
    }
    while(c)
    {
        sum+=(int)pow(c%10,count);
        c/=10;
    }
    if(sum==a)
    return 1;
    else return 0;
}
int main()
{
    int i=1;
    while(i<=1000)
    {
        if(isArmstrong(i))
        {
            printf("%d ",i);
        }
        i++;
    }
    getch();
    return 0;
}