/*Klavyeden girilen iki kelimenin ayn� olup olmad���n� ayn� de�illerse hangisinin kelime olarak daha uzun
oldu�unu belirten program kodunu yaz�n�z*/
#include<stdio.h>
#include<string.h>
int main()
{
	char string1[50];
	char string2[50];
	int uzunluk;
	int uzunluk2;
	
	strcpy(string1,"Bursa");
	strcpy(string2,"Bursa");
	if(strcmp(string1,string2)==0)
	{
		printf("iki kelime de birbirine esit\n");
	}
	uzunluk=strlen(string1);
	uzunluk2=strlen(string2);
	if(uzunluk>uzunluk2)
	{
		printf("ilk kelime daha uzun");
	}
	else if(uzunluk<uzunluk2)
	{
		printf("ikinci kelime daha uzun");
	}
	
	return 0;
}
