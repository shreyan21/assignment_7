#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,flag=0;
    scanf("%d%d",&a,&b);
    int x=a>b?b:a;
     while(x>1)
    {
        if(a%x==0&&b%x==0)
        {
            printf("Not Co-prime numbers\n");
            flag=1;
            break;
        }
        else
        {
            x--;
        }
    }
    if(flag==0)
    {
        printf("Co-prime numbers\n");
    }
    getch();
    return 0;

}