#include<stdio.h>
sum (int *a,int *b )
{
	*a=10;
}
main () {
	int a,b;
	sum(&a,&b);
	printf("%d",a);
}
