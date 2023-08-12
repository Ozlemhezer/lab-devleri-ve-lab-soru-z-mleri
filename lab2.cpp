#include<stdio.h>
void kitleIndeks(int kilo,float boy)
{
	int vki;
	vki=(kilo)/(boy*boy);
	if(vki<=0 && vki<=18)
	{
		printf("1");
		printf("durum=zayýf");
	}
	else if(vki>=19 && vki<=25)
	{
		printf("2");
		printf("normal");
	}
	else if(vki>=26 && vki<=30)
	{
		printf("3");
		printf("kilolu");
	}
	else
	{ 
		printf("4");
		printf("obez");
	}
}
int main()
{
	int kilo;
	float boy;
	printf("kilonuzu giriniz.\n");
	scanf("%d",&kilo);
	printf("boyunuzu giriniz.\n",boy);
	scanf("%f",&boy);
	kitleIndeks(kilo,boy);
	
}
