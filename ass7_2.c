#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    int a=0,b=1,c;
    while(i<=n)
    {
       if(i==1)
       {
        printf("%d ",0);
       }
       else if(i==2)
       {
        printf("%d ",1);
       }
       else 
       {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
       }
       i++;
    }
    getch();
    return 0;
    
}