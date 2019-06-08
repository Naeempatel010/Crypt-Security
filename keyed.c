#include<stdio.h>
#include<string.h>


void main()
{
	char plain_text[30],cipher[30];
	int map[30],i,j;
	printf("enter the plaintext");
	scanf("%s",plain_text);

	printf("please enter the key for the mapping");
	for(i=0;i<strlen(plain_text);i++)
	{
		printf("enter the mapping for %d",i);
		scanf("%d",&map[i]);
	}

	for(i=0;i<strlen(plain_text);i++)
		cipher[i] = plain_text[map[i]];
	
	cipher[i]='\0';
	printf("the cipher is %s",cipher); 


}