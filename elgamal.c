#include<stdio.h>
#include<math.h>

void main()
{
	int p,d,e1,e2,r,c1,c2,pt,decryption;
	printf("Enter the prime number\n");
	scanf("%d",&p);

	printf("enter the decryption key\n");
	scanf("%d",&d);

	printf("enter the first encryption\n");
	scanf("%d",&e1);

	e2=(int)pow(e1,d)%p;

	printf("PUBLIC KEY(E1,E2,p):%d %d %d \n PRIVATE KEY(d): %d",e1,e2,p,d);


	printf("enter the random number\n");
	scanf("%d",&r);
	printf("enter plaintext\n");
	scanf("%d",&pt);
	c1=(int)(pow(e1,r))%p;
	//printf("%d\n",c1);
	c2=(pt*(int)pow(e2,r))%p;
	//printf("%d\n",c2);

	printf("CIPHER TEXT(C1,C2): %d %d\n",c1,c2);


	decryption = ((int)pow(c1,(p-d-1))*c2)%p;

	printf("%d\n",decryption);


}