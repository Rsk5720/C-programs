#include <stdio.h>
#include <stdlib.h>

int main(){
    int *md = (int*)malloc(sizeof(int)*2);
    printf("Enter the rows and columns of the array(separated by spaces) : ");
    for(register int i = 0;i < 2;i++)
    {
        scanf("%d",&md[i]);
    }
    int **arr = (int**)malloc(sizeof(int*)*md[0]);
    arr[0] = (int*)malloc(sizeof(int)*md[0]*md[1]);
    for(int i = 0;i < md[0];i++)
    {
        arr[i] = (*arr + md[1]*i);
    }
        for(register int i = 0;i < md[0];i++)
    {
        printf("Enter %d row elements : ",i+1);
        for(register int j = 0;j < md[1];j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("You have entered : ");
    for(register int i = 0;i < md[0];i++)
    {   
        printf("\t|");
        for(register int j = 0;j < md[1];j++)
        {
            printf("%5d ",arr[i][j]);
        }
        printf("  |");
        printf("\n");
    }
    return 0;
}