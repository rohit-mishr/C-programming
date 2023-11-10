#include <stdio.h>
#include <stdlib.h>
typedef union result{
	int mark;
}result;
typedef union student 
{
	int reg ;
	int marks[5];
	result r1;
} student ;
main()
{
	student s1;
	s1.reg=12215944;
	int i;
	for (i=0 ; i<5 ; i++)
	{
		printf("enter the marks for subject %d \n",i+1);
		scanf("%d",&s1.marks[i]);
		fflush(stdin);
	}
	for (i=0 ; i<5 ; i++)
	{
		printf("marks for subject %d is %d\n",i+1,s1.marks[i]);
	}
	printf("%d",s1.reg);  // will just access some data from name array 
	
}
