#include<stdio.h>
#include<math.h>


int gcd(int a, int h) 
{ 
    int temp; 
    while (1) 
    { 
        temp = a%h; 
        if (temp == 0) 
          return h; 
        a = h; 
        h = temp; 
    } 
} 
void main()
{
	int p,q,n,e,k,flag=0,d,tot,message;
	long long int decrypt,encrypt; 	
	printf("enter the values of p and q");
	scanf("%d%d",&p,&q);
	n=p*q;
	tot=(p-1)*(q-1);
	e=2;
	while(e<tot)
	{
		if(gcd(tot,e)==1)
		{
			break;
		}
		else
		{
			e++;
		}
	}

	k=0;
	while(flag==0)
	{
		if((tot*k+1)%e==0)
		{
			flag=1;
			d=(tot*k+1)/e;
		}
		else
		{
			k++;
		}
	}
	printf("\nPUBLIC KEY(%d %d)",e,n);
	printf("\nPRIVATE KEY(%d %d)",d,n);
	printf("\nenter the plaintext");
	scanf("%d",&message);
	//printf("%lf\n",pow(message,e));
	//printf("%lf\n",pow(encrypt,d));
	encrypt = (int)(pow(message,e))%n;
	decrypt = (int)(pow(encrypt,d))%n;
	printf("\nencrypted message is %lld",encrypt);
	printf("\ndecrypt message is %lld \n",decrypt );



}