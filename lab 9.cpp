/* ��renci numaran�zdaki tek say�lar� bir int dinamik diziye,�ift say�lar� ise bir char diziye ekleyen fonksiyonu yaz�n�z.
Fonksiyon ��RENC� NUMARANIZI ve �NT �LE CHAR PO�NTER BA�LANGI� ADRESLER�N� parametre olarak alacak*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(int ogrenci_no, int *ptr,char *cptr,int eleman_sayisi)
{
	int i=0,k,m=0;
	while(ogrenci_no!=0)
	{
	 	k=ogrenci_no%10; //son eleman� al�r.
		ogrenci_no = ogrenci_no/10;// bir eleman eksilir 
		
		if(k%2==0)//k �ift ise char dizisine 
		{
			cptr[i] = k + '0'; //cptr dizisi k y� char olarak diziye ekler 
			i++;
		}
		else 
		{
			ptr[m] = k;
			m++;
		}
		
	}
	
	for(i=0;i<4;i++)
	{
		printf("cift sayilar=%c\n",cptr[i]);
	}
	
	for(i=0; i<eleman_sayisi; i++)
	{
		printf("tek sayilar= %d\n",ptr[i]);
		
	}
}
int main()
{
	int ogrenci_no=2110213037;
	int temp=ogrenci_no;
	int i, *dizi, cnt_tek=0,k;
	char C[4];
	// tek say�l� eleman say�s�n� bulma 
	while(temp!=0)
	{
		k=temp%10;
		temp=temp/10;
		if(k%2!=0)
		{
			cnt_tek++;
		}
	}
	
	dizi = (int *)calloc(cnt_tek,sizeof(int));
	fun(ogrenci_no,dizi,C ,cnt_tek);
	
	return 0;
	
}





























































