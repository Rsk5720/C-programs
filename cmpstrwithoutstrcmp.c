#include <stdio.h>

int str_cmp(char s1[10],char s2[10]){
    int i=0;
    while (s1[i] != '\0' || s2[i] != '\0'){
        int d = s1[i] - s2[i];
        if (d != 0)
        {
            if (d > 0)
            {
                return 1;
            }
            return -1;
            /*as the function can only return value ones we can use this kind of return statements in
            nested if statements*/
        }
        i++;
    }
    return 0;
}
/*s1 and s2 is used for defining function only*/
void main(){
    char ss1[10],ss2[10];/*this ss1,ss2 is used for getting user input and use it as arguments of 
    str_cmp() function that is*/
    printf("Enter the first string : ");
    scanf("%s",ss1);
    printf("Enter the second string : ");
    scanf("%s",ss2);
    printf("The first string is %s and the second string is %s\n",ss1,ss2);
    printf("The function gives value %d\n",str_cmp(ss1,ss2));
    if (str_cmp(ss1,ss2) < 0)
    {
        printf("The second string is greater than the first\n");
    }
    
    else if (str_cmp(ss1,ss2)>0)
    {
        printf("The first string is greater than the second\n");
    }
    
    else
    {
        printf("Both strings are equal");
    }
}
