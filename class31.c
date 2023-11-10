// malloc block by default garbage value
// calloc blocks by default contian 0 value

#include <stdio.h>
#include <stdlib.h>
main ()
{
	int *ptr, i,n1,n2;
	n1=5;
	ptr= (int *)malloc(n1*sizeof(int));
	for ( i =0;  i<n1 ; i++)
	{
		printf("%d\n",ptr + i);
	}
//	for ( i =0;  i<n1 ; i++)
//	{
//		printf("%d",*(ptr + i));
//	}
printf("\n");
	n2=10;
	ptr=(int *)realloc(ptr,n2*sizeof(int));  // setting the size to zero is equivalent to using the free function
	for ( i =0;  i<n2 ; i++)
	{
		printf("%d\n",ptr + i);
	}
	free(ptr);
	ptr=NULL;
	for ( i =0;  i<n2 ; i++)
	{
		printf("%d\n",ptr + i);
	}
	
	// exit(1) ends the program
	
	
	
	
	
	
	
}
