#include<stdio.h>

void main()
{
	int i,n;
	char str[40];
	printf("enter the key value");
	scanf("%d",&n);
	printf("enter the string");
	scanf("%s",str);
	for(i=0;i<str[i]!='\0';i++)
	{
		str[i]=str[i]+4;	
	}
	
	printf("%s",str);


}
