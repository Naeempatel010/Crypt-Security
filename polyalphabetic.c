#include<stdio.h>
#include<string.h>

void main()
{
	char key[40],plain_text[20],cipher[20];
	int i,j;
	printf("enter the key value");
	scanf("%s",key);

	printf("Enter the plain text\n");
	scanf("%s",plain_text);

	j=0;
	for(i=0;i<strlen(plain_text);i++)
	{
		cipher[i] = (key[j]-65)+(plain_text[i]-65)+66;
		j=(j+1)%strlen(key);
	}
	cipher[i]='\0';
	printf("%s",cipher);
}


