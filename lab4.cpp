#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n, en_buyuk=0;
	int *ptr;
	printf("Eleman sayisini giriniz=\n");
	scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(ptr[i]>en_buyuk)
		{
			en_buyuk = ptr[i];
		}
		
	}
	printf("%d",en_buyuk);
	
}
