#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j;
    scanf("%d",&x);
    i=x+1;
    while(1)
    {
        j=2;
        while(j<i)
        {
            if(i%j==0)
            break;
            j++;
        }
        if(j==i)
        {
        printf("Next prime number is %d\n",i);
        break;
        }
        i++;
    }
    getch();
    return 0;
}