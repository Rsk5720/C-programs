#include<stdio.h>
#define n 7
int main()
{
	int inp[n],out[n];
	int i = 0,count=0,flag=0,j=0,dupn=0;
	printf("Enter the values : ");
	for(i=0;i<n;i++) scanf("%d",&inp[i]);
	printf("\n");
	for(i =0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j) continue;
			if(inp[i]==inp[j])
			{
				flag = 1;
				break;
			}
		}
		if(!flag)
		{
			out[count]=inp[i];
			count++;
		}
		flag=0;
	}
	dupn= n -count;
	printf("The number of duplicate numbers %d\n",dupn);
	printf("The array in reverse oreder : ");
	for(i=count-1;i>=0;i--) printf("%d ",out[i]);
	printf("\n");
	return 0;
}
	
