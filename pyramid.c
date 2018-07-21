#include <stdio.h>

void main(){
    int n;
    printf("Enter the number of steps : ");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++)
    {
        for (register int j=2*(n-i);j>=0;j--)
        {
            printf(" ");
        }
        for(register int k = 1;k <2*(i);k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}