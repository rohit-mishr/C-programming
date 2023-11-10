#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int a = 123 ,i,  n=20,count;
	char str[100]="";
	printf("ENTER THE STRING : ");
	gets(str);
	//itoa(a,str,n); // keeping the n as 2 gives binary output
	//printf("%s",str);
	for (i =0;str[i]!='\0';i++)
	{
		if (str[i]==' ')
		{
			str[i]='$';
		}
	}
	printf("%s",str);
} 
