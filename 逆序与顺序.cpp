#include <iostream>
#include<stdio.h>
void posi(int n)//Ë³Ðò 
{
	if (n<=9)
		printf("%d ",n);	
			else {
		posi(n/10);
	    printf ("%d ",n%10); 
		 }	
}
void nega(int n)
{
if (n<=9)
		printf ("%d ",n);		
	else {
	    printf ("%d ",n%10); 
		nega(n/10); 	
}
}
int main(){
	int x;
	scanf("%d",&x);
	posi(x);
	printf("\n");
	nega(x);
}

