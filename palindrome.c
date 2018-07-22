#include <stdio.h>
#include <string.h>

void main(){
    char inp[30],temp[30];
    printf("Enter the input : ");
    scanf("%s",inp);
    strcpy(temp,inp);
    strrev(temp);
    if(strcmp(temp,inp)==0)
    {
        puts("The input is a palindrome");
    }
    else
    {
        puts("The input is not a palindrome");
    }
}