#include<stdio.h>


void main()
{
	char a='a';
	char *p;
	int i;

	p = &a;
	for(i=0;i<10;i++)
	{
		printf("%u => %c\n",p+i,*(p+i));
	}
	



}
