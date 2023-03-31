#include<stdio.h>
#include<string.h>

main()
{
	char name[100],temp[100],rev[100];
	int i;
	
	printf("Enter String :-");
	gets(name);
	puts(name);
	
	strcpy(temp,name);
	strcpy(rev,strrev(temp));
	puts(rev);
	if(strcmp(rev,name)==0)
	{
		printf("String is Pelindrom");
	}
	else
	{
		printf("String is not Pelindrom");
	}
}
