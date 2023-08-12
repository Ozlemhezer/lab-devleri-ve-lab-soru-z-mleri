#include<stdio.h>
int sum(int N)
{	
	if(N<=0)	return 0;
	
	else	return N+sum(N-1);
}
int main(void)
{
	int x;
	printf("sayi giriniz\n");
	scanf("%d",x);
	sum(x);
	return 0;
	
}
