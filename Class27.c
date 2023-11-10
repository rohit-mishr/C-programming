#include<stdio.h>
main()
{
	int a[]={1,2,3,4,5,6},sum=0;
	int *p;
	p=a;
	for(int i = 0; i < 6;i++)
	{
		sum+=*(a+i);
	}
	printf("%d",sum);
}
