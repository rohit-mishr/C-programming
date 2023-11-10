#include<stdio.h>
void print1()
{
	extern int x;
	printf("%d",x);
	x+=10;
}
