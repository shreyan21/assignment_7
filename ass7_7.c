#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    for( i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        printf("%d ",i);
    }
    getch();
    return 0;
}