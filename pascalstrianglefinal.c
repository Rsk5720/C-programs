#include <stdio.h>

int main(void)
{
    puts("Enter the no. of lines you want to display : ");
    int len1,len;scanf("%d",&len1);
    len = len1+1;
    int b=4*len-4;
    for(register int i=1;i<=len;i++)
    {
        for(register int j=0;j<b;j++)
        {
            printf(" ");
        }
        b=b-4;
        int c = 1;
        for (register int j = 1; j <= i; j++)
        {
             printf("%-7d ", c);
             c = c * (i - j) / j;
        }
        printf("\n");
    }
}