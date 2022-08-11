#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a;
    int c=a;
    int sum=0;
    int count=0;
    while(b)
    {
        b/=10;
        count++;
    }
    while(c)
    {
        sum=sum+(int)pow(c%10,count);
        c/=10;
    }
    if(a==sum)
    {
        printf("%d is an armstrong number\n",a);
    }
    else
    {
        printf("%d is not an armstrong number\n",a);

    }
    getch();
    return 0;
    

}