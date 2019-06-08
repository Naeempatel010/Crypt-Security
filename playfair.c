#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int check(char ch,char *str)
{
	int flag=0,i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==ch)
			flag=1;

	}
	return flag;
}

int get_i(char ch,char str[][10])
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(str[i][j]==ch)
			{
				return i;
			}
		}
	}
	return -1;

}
int get_j(char ch,char str[][10])
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(str[i][j]==ch)
			{
				return j;
			}
		}
	}
	return -1;	
}
void main()
{
	char key[10][10],key_s[20],start='A',input;
	char plain_text[40],l,r;
	int i,j=0,k,i1,j1,i2,j2;
	printf("\n Enter the key:");
	scanf("%s",key_s);
	j=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(k!=strlen(key_s))
			{
				key[i][j] = key_s[k];
				k++;

			
			}
			else
			{
				while(check(start,key_s))
				{
					start++;
				}
				while(start=='J')
					start++;

				key[i][j] = start;
				start++;
			}
		}
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c\t",key[i][j]);
		}
		printf("\n");
	}
	printf("enter the plain text");
	scanf("%s",plain_text)	;
	for(i=0,j=1;j<=strlen(plain_text);i=i+2,j=j+2)
	{	
		
		l = plain_text[i];
		r = plain_text[j];
		if(r==0)
			r='X';
		//printf("%c %c \t",l,r);
		i1=get_i(l,key);
		i2=get_i(r,key);
		j1=get_j(l,key);
		j2=get_j(r,key);
		//printf("l:%d %d \n",i1,j1);
		//printf("r:%d %d \n",i2,j2);
		if(i1==i2)
		{
			printf("%c %c \t",key[i1][(j1+1)%5],key[i2][(j2+1)%5]);
		}
		else if(j1==j2)
		{
			printf("%c %c \t",key[(i1+1)%5][j1],key[(i2+1)%5][j2]);	
		}
		else
		{
			printf("%c %c \t",key[i1][j2],key[i2][j1]);
		}


	}
}