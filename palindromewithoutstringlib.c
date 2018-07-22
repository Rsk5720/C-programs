#include <stdio.h>
void palin(char s[30]);
void main(){
    char s[30];
    printf("Enter the input : ");
    scanf("%s",s);
    palin(s);
}
void palin(char s[30]){
    int count = 0;
    for(register int i = 0;s[i]!=0;i++)
    {
       count++; 
    }
    int h=count-1 ,j=0;
    while(h>1)
    {
        if (s[j++] != s[h--])
        {
            printf("The input is not palindrome\n");
            return;
        }
    }
    printf("The input is palindrome\n");
}