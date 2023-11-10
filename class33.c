#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	// strcpy copies data from the start
	char s1[50] = " I am a student";
	char s2[20]=" at LPU";
	//strcat(s1,s2);
	printf("%s\n",s1);
	//strncat(s1,s2,67);
	//int x = strrev(s1);
	//char *x2 = strrev(s1);
	//printf("%d\n",x);
	//printf("%u",x2);
	//  atoi converts string to integer 
	long int i;
	i = atol("123");
	printf("%ld",i);

