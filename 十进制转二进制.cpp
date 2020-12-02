#include<stdio.h>
void dectobin(int n)
{
	if((n==1)||(n==0))
	printf("%d",n);
	else
	{
		dectobin(n/2);
		printf("%d",n%2);
	}

}
int main()
{
	int x;
	scanf("%d",&x);
	dectobin(x);
	return 0; 
}

