/*Klavyeden girilen iki kelimenin ayný olup olmadýðýný ayný deðillerse hangisinin kelime olarak daha uzun
olduðunu belirten program kodunu yazýnýz*/
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
