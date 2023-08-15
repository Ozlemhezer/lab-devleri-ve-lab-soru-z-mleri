/*Klavyeden öðrenci sayýsý (en fazla 100) ve ders geçme notunu alarak bu bilgileri tanýmlanacak “hesapla” fonksiyonuna
gönderen bir “main” fonksiyonu hazýrlayýnýz. “hesapla” fonksiyonu kendisine gelen öðrenci sayýsý kadar notu klavyeden
okuyarak 100 elemanlý bir diziye kaydetmeli ve geçme notuna göre kaç tane öðrencinin dersten kaldýðýný bularak
fonksiyondan geri döndürürken, sýnýf ortalamasýný da ekrana yazdýrmalýdýr. Buna göre aþaðýda verilen alanlara “main” ve
“hesapla” fonksiyonlarýný yazýnýz*/
#include<stdio.h>
float hesapla(int ogrenci_sayisi, int gecme_notu)
{
	int i,cnt=0,toplam=0;
	float a;
	int notlar[100];
	printf("notlarý giriniz");
	
	for(i = 0; i < ogrenci_sayisi ;i++) //girilen notlar diziye yerleþtirildi
	{
		scanf("%d",&notlar[i]);
	}
	//kaç öðrenci dersten kaldý
	for(i = 0; i < ogrenci_sayisi ; i++)
	{
		if(notlar[i]<gecme_notu)
		{
			cnt++;
		}
	}
	//sýnýf ortalamasý
	//dizideki bütün elemanlarýn toplamý 
	for(i = 0; i<ogrenci_sayisi; i++)
	{
		toplam = toplam + notlar[i];
		
	}
	a = (toplam)/ogrenci_sayisi;
	printf("dersten kalan ogrenci sayisi %d\n",cnt);
	return a;
	
}

int main()
{
	
	int gecme_notu,n,b;
	printf("ogrenci sayisini giriniz=\n");
	scanf("%d",&n);
	printf("gecme notunu giriniz");
	scanf("%d",&gecme_notu);
//	hesapla(n,gecme_notu);
	b=hesapla(n,gecme_notu);
	printf("sýnýf ortalamasý=%d",b);
	return 0;
		
	
	
	
	
	
	
}






















