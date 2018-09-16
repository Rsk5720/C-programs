#include <stdio.h>
#include <stdlib.h>

void arrrev(int *arr, int n)
{   
    int start = 0;
    n--;
    while(start < n)
    {
        int temp = arr[start];
        arr[start++] = arr[n];
        arr[n--] = temp;
    }    
}

int main()
{
    printf("Enter the number of elements you wanna enter : ");
    int n;
    scanf("%d", &n);
    int *arr;
    arr = (int*)malloc(sizeof(int)*n);
    printf("\nEnter the numbers : ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    arrrev(arr, n);
    printf("\nThe array is reversed.\n\n");
    printf("The reversed array is : ");
    for(int i = 0; i < n; i++) printf("%d ",arr[i]);
    printf("\n");
}