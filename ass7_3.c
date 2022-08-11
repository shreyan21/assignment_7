#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0||n==1)
    {
       printf("Present\n");
    }
    else
    {   
        int a=0,b=1,c=a+b;
        int flag=0;
    while(c<n)
    {
        
    
    
            c=a+b;
            if(c==n)
            {  
                flag=1;
                printf("Present\n");
                break;
            }
            a=b;
            b=c;
        
    }
      if(flag==0)
      {
        printf("Not present\n");
      }
    }
    getch();
    return 0;
}