/*Klavyeden ��renci say�s� (en fazla 100) ve ders ge�me notunu alarak bu bilgileri tan�mlanacak �hesapla� fonksiyonuna
g�nderen bir �main� fonksiyonu haz�rlay�n�z. �hesapla� fonksiyonu kendisine gelen ��renci say�s� kadar notu klavyeden
okuyarak 100 elemanl� bir diziye kaydetmeli ve ge�me notuna g�re ka� tane ��rencinin dersten kald���n� bularak
fonksiyondan geri d�nd�r�rken, s�n�f ortalamas�n� da ekrana yazd�rmal�d�r. Buna g�re a�a��da verilen alanlara �main� ve
�hesapla� fonksiyonlar�n� yaz�n�z*/
#include<stdio.h>
float hesapla(int ogrenci_sayisi, int gecme_notu)
{
	int i,cnt=0,toplam=0;
	float a;
	int notlar[100];
	printf("notlar� giriniz");
	
	for(i = 0; i < ogrenci_sayisi ;i++) //girilen notlar diziye yerle�tirildi
	{
		scanf("%d",&notlar[i]);
	}
	//ka� ��renci dersten kald�
	for(i = 0; i < ogrenci_sayisi ; i++)
	{
		if(notlar[i]<gecme_notu)
		{
			cnt++;
		}
	}
	//s�n�f ortalamas�
	//dizideki b�t�n elemanlar�n toplam� 
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
	printf("s�n�f ortalamas�=%d",b);
	return 0;
		
	
	
	
	
	
	
}






















