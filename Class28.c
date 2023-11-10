#include<stdio.h>
//void swap1(int *, int *);
//main()
//{
//	int a=7 , b=9;
//	printf("before swapping values of a = %d b= %d \n",a,b);
//	swap1(&a,&b);
//	printf("after swapping in main , values of a= %d and b = %d\n",a,b);	
//}
//void swap1(int *x , int *y)
//{
//	int temp;
//	temp=*x;
//	*x=*y;
//	*y=temp;
//	printf("values of a = %d b=%d \n",*x,*y);
//}

main()
{
	int x=10,b=9;
	void *ptr;
	ptr=&x;
	printf("The value at generic pointer is %d",*(int *)ptr);	
	
	
	// pointer arithmatic isn't possible with void pointers 
}

