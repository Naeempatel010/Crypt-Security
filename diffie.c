#include<stdio.h>
#include<math.h>

void main()
{
	int p,q,key_a,key_b,a,b,A,B;
	printf("enter the value for p and q (make sure p>q)\n");
	scanf("%d %d",&p,&q);

	if(p<q)
		return;

	printf("Enter any value for a\n");
	scanf("%d",&a);

	printf("enter any value for b\n");
	scanf("%d",&b);

	A=(int)(pow(q,a))%p;
	B=(int)(pow(q,b))%p;

	printf("the value for the A and B are %d %d",A,B);

	key_a = (int)(pow(B,a))%p;
	key_b = (int)(pow(A,b))%p;

	if(key_a==key_b)
	{
		printf("keys matches");
	}

	else
	{
		printf(" K_A= %d and K_B=%d",key_a,key_b);
	}

}
