#include<stdio.h>
#include<string.h>
#include<ctype.h>


void main()
{

char key[26],plain_text[20],cipher[20];
int len_key=26,n,i;

printf("\n enter the key value for each letter from (A-Z) in chronological order");
scanf("%s",key);

if(strlen(key)!=26)
{
	printf("INCOMPLETE KEY");
	return;
}

for(i=0;i<len_key;i++)
	key[i]=toupper(key[i]);

printf("Enter the plain text");
scanf("%s",plain_text);

for(i=0;i<strlen(plain_text);i++)
	plain_text[i]=toupper(plain_text[i]);

for(i=0;i<strlen(plain_text);i++)
{
	cipher[i] = key[plain_text[i]-65];
	//printf("%d %d",plain_text[i],plain_text[i]-65);

}
cipher[i]='\0';
printf("%s",cipher);	



}