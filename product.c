#include<stdio.h>
#include<string.h>
void main()
{
	char plain_text[20],cipher1[20],cipher2[10][10];
	int key1,key2,no_r,start,i,j,n;
	printf("\nenter the plain text");
	scanf("%s",plain_text);
	printf("\nenter the key for caesar");
	scanf("%d",&key1);

	for(i=0;i<strlen(plain_text);i++)
		cipher1[i] = plain_text[i]+key1;

	printf("\nplain text after the first encryption is : %s",cipher1);


	printf("\nnow passing the first encrpted text through the keyless transposition cipher");

	printf("\nenter the no of columns");
	scanf("%d",&key2);

	no_r= strlen(cipher1)/key2+1;
	start=0;
	for(i=0;i<no_r;i++)
	{
		for(j=0;j<key2;j++)
		{
			cipher2[i][j] = cipher1[start++];
		}
	}

	printf("\nFinal encrypted message is :");
	for(i=0;i<no_r;i++)
	{
		for(j=0;j<key2;j++)
		{
			printf(" %c ",cipher2[j][i]);
		}
	}




}