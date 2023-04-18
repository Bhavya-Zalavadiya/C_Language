#include<stdio.h>

main ()
{
	int a,b;
	int *ptr,*ptr1;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	ptr=&a;
	ptr1=&b;
	
	*ptr=*ptr+*ptr1;
	*ptr1=*ptr-*ptr1;
	*ptr=*ptr-*ptr1;
	
	printf("The values after swapping\n\n");
	
	printf("A : %d",*ptr);
	printf("\nB : %d",*ptr1);
}
