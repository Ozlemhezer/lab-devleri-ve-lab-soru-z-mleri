/*Verilen c�mle i�erisinde verilen kelimeyi arayan ve e�er kelime c�mlede varsa bulundu�u yerlerin ba�lang��
indisini ekrana yazd�ran program�n kodunu yaz�n�z.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char cumle[100];
	char aranan_kelime[40];
	int i=0,uzunluk;
	char *ptr;
	char *ptr2;
	printf("cumle giriniz\n");
	gets(cumle);
	printf("kelime giriniz\n");
	gets(aranan_kelime);
	
	ptr2=aranan_kelime;
	ptr=cumle;
	while(*ptr && *ptr2){
		
			if(*ptr==*ptr2 )
			{
				*ptr++; *ptr2++;
				
			}
			else if(*ptr != *ptr2)
			{	
				i++;
				*ptr++;
			}
	}
	uzunluk=strlen(cumle);
	if(i==uzunluk)
	{
		printf("aranan kelime yoktur");
	}
	else
	{
		printf("baslangic indisi=%d",i);
	}


}
