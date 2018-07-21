#include <stdio.h>

void main(){
    int n;
    printf("Enter the number of steps : ");
    scanf("%d",&n);
    for (register int i =1;i<=n;i++)
    {
        for(register int j = 1;j <=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}