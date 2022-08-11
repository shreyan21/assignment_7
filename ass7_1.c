#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("0\n");
    }
    else if(n==2)
    {
        printf("1\n");
    }
    else
    {
        int c;
        int a=0,b=1;
        int i=2;
        while(i!=n)
        {   
            c=a+b;
            a=b;
            b=c;
            i++;
        }
        printf("%d\n",c);
    }
    getch();
    return 0;
}