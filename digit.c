#include <stdio.h>

void main(){
    int inp,count=1;
    printf("Enter the number : ");
    scanf("%d",&inp);
    do{
        inp/=10;
        ++count;
    }
    while(inp!=0);
    printf("\nThe number of digits is %d \n",count);
}