#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef union data{
	int i;
	float f;
	char str[20];
}data;
typedef struct meta{
	int i;
	float f;
	char str[20];
}meta;
typedef struct student{
	int id;
	int age;
}student;
int show(student s);
main()
{
	meta m;
	data d;
	strcpy(d.str,"abc");
	//printf("%d\n",sizeof(d));
	//printf("%d\n",sizeof(m));
	student s1={1,21};
	printf("%d",show(s1));
}
int show(student s)
{
	printf("%d\n",s.id);
	printf("%d\n",s.age);
	return s.age;
}

// if u want to return a struct type then u can store the returned value in a similar structure variable and acess its attributes
