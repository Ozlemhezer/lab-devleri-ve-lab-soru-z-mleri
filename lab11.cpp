/*Soru 1: Main fonksiyonu i�erisinde verilen bir do�al say�ya kadar olan (bu say� dahil) t�m say�lar�n
toplam�n� rek�rsif bir fonksiyon kullanarak hesaplayan�z.*/
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
