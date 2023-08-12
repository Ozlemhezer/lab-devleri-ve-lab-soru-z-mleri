#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i, k=0,g;
	int cnt1=0, cnt2=0;
	char *ptr;
	char str1[100];
	char str2[100];
	printf("string giriniz\n");
	scanf("%s",str1);
	printf("tekrar string giriniz\n");
	scanf("%s",str2);
	
	for(i=0; str1[i]!='\0'; i++)
	{
		cnt1++;
	}
	
	for(i=0; str2[i]!='\0'; i++)
	{
		cnt2++;
	}
	
	ptr = (char *)calloc(cnt1+cnt2,sizeof(char));
	for(i=0; i<cnt1; i++)
	{
		
			ptr[i] = str1[k];
			k++;
	}
	for(g=0; g<cnt2; g++,i++)
	{
		ptr[i] = str2[g];
	}
	for(i=0; i<cnt1+cnt2;i++)
	{
		printf("%c",ptr[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
