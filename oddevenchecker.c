#include <stdio.h>
#include <conio.h>
void main(){
    int num,remain;
    printf("This program will check whether a number is odd or even");
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("The number is %d",num);
    remain=num % 2;
    if (remain==1)
    {
     printf("\nThe Number is odd");   
    }
    else{
        printf("\nThe Number is even");
    }
    getch();
}