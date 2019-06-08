#include<stdio.h>

void main()
{
	char str[3];
	int cipher[3][1],key[3][3],plain_text[3][1];
	int i,j,k,sum=0;
	printf("Enter the (3x3) key");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&key[i][j]);

		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c\t",key[i][j]+65);
		}
		printf("\n");
	}


	printf("Enter a 3 letter string");
	scanf("%s",str);
	for(i=0;i<3;i++)
		plain_text[i][0] = str[i]-65;

	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
				sum+=key[i][k]*plain_text[k][j];
			cipher[i][j] = sum;
		}
	}


	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			cipher[i][j] = cipher[i][j]%26+65;
		}
	}

	for(i=0;i<3;i++)
		printf("%c",(char)(cipher[i][0]));


}