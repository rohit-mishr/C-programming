#include <stdio.h>
main ()
{
//	int a[5] = {1,2,3,4,5};
//	int *p_a,i=0;
//	p_a=a;
//	for (i =0;i<5;i++)
//	{
//		scanf("%d",(p_a+i));
//	}
//	for (i =0;i<5;i++)
//	{
//		printf("%d ",*(p_a+i));
//	}
//	 
	
	
int i , *p1 , **p2 , ***p3;
p3=&p2;
p2=&p1;
printf("%u\n",&p1);
printf("%u\n",&p3);
printf("%u\n",&p2);
printf("%u",sizeof(int));
}
