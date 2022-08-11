#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=a>b?b:a;
    while(1)
    {
        if(a%x==0&&b%x==0)
        {
            printf("HCF is %d\n",x);
            break;
        }
        else
        {
            x--;
        }
    }
    getch();
    return 0;
}