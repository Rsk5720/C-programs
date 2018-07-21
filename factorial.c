#include <stdio.h>

void main(){
    int n,fac=1;
    register int i=1; 
    printf("Enter the number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        fac*=i;
        i++;
    }
    printf("\nThe factorial of the number is %d\n",fac);
}