#include<stdio.h>
#include<string.h>


void main()
{
	int n,j,i,k;
	char plain_text[30],cipher[30];
	printf("enter the number of fences");
	scanf("%d",&n);

	printf("enter the plain text");
	scanf("%s",plain_text);
	j=0;
	i=0;
	while(k<n)
	{
		j=k;
		for(;i<strlen(plain_text);i++)
		{
			if( !(j>=strlen(plain_text)))
			{
				cipher[i]=plain_text[j];
				j=j+n;
			}
			else
			{
				break;
			}

		}
		k++;
		//printf("\n%s",cipher);
	}
	cipher[i] = '\0';
	printf("\n%s",cipher);

}