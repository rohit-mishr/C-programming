#include <stdio.h>
#include <string.h>
typedef struct student
{
	char name[20];
	int rollno;
	float cgpa;
} student;
main()
{
	
	// one way to iniatialize
//	student s1;
//	strcpy(s1.name,"abcd");
//	s1.rollno = 45;
//	s1.cgpa = 9.5;
//	printf("name is %s  roll no is %d  cgpa is %f",s1.name,s1.rollno,s1.cgpa);

	//another way to do that
//student s1 = { "abcd",20,8.5};

//student s1,s4;
//gets(s1.name);
//scanf("%d",&s1.rollno);
//scanf("%f",&s1.cgpa);

// note
// s4=s1; // absolutely correct

char *j;
j=(char*)malloc(55*sizeof(char));
scanf("%[^\n]s",j);
puts(j);
}

