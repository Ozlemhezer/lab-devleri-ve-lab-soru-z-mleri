/*��renci say�s� ve ders ge�me notu girilecek */
#include<stdio.h>
int hesapla(int notlar[],int gecme_notu, int ogrenci_sayisi)
{
    
	int  kalan_ogrenci_sayisi=0,toplam=0;
	int i;
	printf("notlar� giriniz.");
	for(i=0; i<=ogrenci_sayisi; i++)
	{
		scanf("%d", &notlar[i]);
	}
	
	/*kalan ��renci say�s�n� bul*/
	for(i=0;i<=ogrenci_sayisi; i++)
	{ 
		if(notlar[i]<gecme_notu)
		{
			kalan_ogrenci_sayisi++;	
			toplam=toplam+notlar[i];
			
		}
		printf("kalan �grenci sayisi=%d", kalan_ogrenci_sayisi);
	printf("not ortalamas�=%d",toplam/ogrenci_sayisi);
	return kalan_ogrenci_sayisi;
	}
	/* s�n�f ortalamas�n� bul ve yazd�r*/
	/*toplam notlar/��renci say�s�*/


	
}

int main()
{
	int notlar[100];
	int gecme_notu, ogrenci_sayisi;
	printf("ogrenci sayisini giriniz");
	scanf("%d",&ogrenci_sayisi);
	printf("%d",hesapla(notlar,45,ogrenci_sayisi));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
