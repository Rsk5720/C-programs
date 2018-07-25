#include <stdio.h>

int prime(int i)
{
    for(register int j = 2;j < i;j++)
    {
        if (i%j == 0)
        {
            return 0;
        }        
    }
    return 1;
}


int main(void)
{  
   int n; 
   printf("Enter an even number greater than 2 : ");
   scanf("%d",&n);
   printf("\n");
   if (n==2)
   {
       printf("Enter an even number other than 2\n\n");
   }
   else if (n%2==0)
   {
        for(register int i = 2;i <= n/2    ;i++)
        {
            if (prime(i))
            {
                if (prime(n-i))
                {
                    printf("%d = %d + %d\n\n",n,i,n-i);
                }
            }
        }
       
   }
   else
        printf("Enter an even number\n\n"); 

}