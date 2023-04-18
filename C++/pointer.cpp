#include<stdio.h>

main ()
{
	char a[8];
	char *ptr[8];
	int count=0;
	printf("Enter string : ");
	gets(a);
	ptr[8]=&a[8];
	
	if(*ptr!=0){
		count++;
		*ptr++;
	}
	printf("The length of string is : %d",count);
}
