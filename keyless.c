#include<stdio.h>
#include<string.h>

void main()
{
	char cipher[10][10],plain_text[20];
	int i,j,start,n;
	printf("enter the plain text");
	scanf("%s",plain_text);
	printf("enter the number of elements as the key");
	scanf("%d",&n);
	int no_r= (strlen(plain_text)/n)+1;
	start=0;
	for(i=0;i<no_r;i++)
	{
		for(j=0;j<n;j++)
		{
			cipher[i][j] = plain_text[start++];
			printf("%c\t",cipher[i][j]); 

		}
		printf("\n");
	}

	for(i=0;i<no_r;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c\t",cipher[j][i]);
		}
	}


}