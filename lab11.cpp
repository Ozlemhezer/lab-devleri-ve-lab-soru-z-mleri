/*Soru 1: Main fonksiyonu içerisinde verilen bir doðal sayýya kadar olan (bu sayý dahil) tüm sayýlarýn
toplamýný rekürsif bir fonksiyon kullanarak hesaplayanýz.*/
#include<stdio.h>
int fun(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n + fun(n-1);
	}
}
int main()
{
	int n;
	printf("bir sayi giriniz = \n");
	scanf("%d",&n);
	printf("%d",fun(n));
	return 0;
}
