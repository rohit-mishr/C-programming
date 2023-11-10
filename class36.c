#include <stdio.h>
typedef struct employee {
	char name[5];
	float salary;
	int age;
} emp;
main()
{
	int i;
	emp e[100]={};
//	for(i=0;i<5;i++)
//	{
//		printf("Enter the name of employee %d\n",i+1);
//		gets(e[i].name);
//		fflush(stdin);
//		printf("Enter the salary of employee %d\n",i+1);
//		scanf("%f",&e[i].salary);
//		fflush(stdin);
//		printf("Enter the age  of employee %d\n",i+1);
//		scanf("%d",&e[i].age);
//		fflush(stdin);
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("name of employee %d is : %s\n",i+1,e[i].name);
//		printf("salary of employee %d is : %f\n",i+1,e[i].salary);
//		printf("age of employee %d is : %d\n\n",i+1,e[i].age);
//		
//	}
	emp *ptr;
	ptr = e;
	// for acessing we can use (*ptr). or ptr-> 

}
