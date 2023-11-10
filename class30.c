#include <stdio.h>
main()
{
	// in static memory allocation stack is used and is more efficient to work on , memory wastage
	// in dynamic memory allocation heap is used . slower than stack, fragmentation
	int *p , n , i;
	printf("enter the number of integers to be used:\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if (p==NULL)
	{
		printf("not sufficient memory available\n");
		exit(1);
	}
	else
	{
		printf("memory allocation succcessful\n");
		for (i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
			printf("Your array is: ");
		for (i=0;i<n;i++)
		{
			printf("%d ",*(p+i));
		}
		
	}
	
	
	
	// the syntax of calloc 
	/* void * calloc(n,size); */
	
	free(p);
	
}

