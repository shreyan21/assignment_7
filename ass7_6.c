#include<stdio.h>
#include<conio.h>
int main()
{
    int x=2,i;
    while(x<100)
    {  
        i=2;
        while(i<x)
        {
            if(x%i)
            {
                i++;
            }
            else
            {
                break;
            }
        }
        if(i==x)
        {
            printf("%d ",x);
        }
        x++;
    }
    getch();
    return 0;
}