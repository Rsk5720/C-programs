#include <stdio.h>

void  main(){
    int n;
    printf("Enter the number of steps : ");
    scanf("%d",&n);
    for(register int i = 1;i < n;i++)
    {   if(i!=1)
        {
        printf("*");
        for(register int j = 1;j < 2*(i-1);j++)
        {
            printf(" ");
        }
        printf("*\n");
        }
        else
        {
            printf("*\n");
        }
    }
    for(register int i = 0;i < n;i++)
    {
        printf("* ");
    }
}