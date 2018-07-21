#include <stdio.h>
int x,y;
void main(){
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    printf("The value of x is %d and the value of y is %d",x,y);
    printf("\nSwaping the variables");
    x = x + y;
    y = x - y;
    x = x - y;
    /*suppose x=2 and y=3 then first x becomes 5 then y becomes 2 and then x becomes 3 and that's
    how the variables are swapped without introducing another variable
    In general
    A= A operation B
    B= A inverse-operation B
    A= A iverse-operation B
    */
    printf("\nThe value of x is %d and the value of y is %d",x,y);

}