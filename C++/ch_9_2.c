#include<stdio.h>
main ()
{
	int n,b,sum=0;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n][n],i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("Enter the column which you want to sum : ");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==b-1)
			{
				printf("%d ",a[i][j]);
				sum+=a[i][j];
			}
			
		}
	}
	printf("The sum of Row is : %d",sum);
}
