#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i;
	char *ptr;
	int n=12;
	const char string[]="ozlem hezer";
	ptr = (char *)malloc(n*sizeof(char));
	strcpy(ptr,string);
	for(i=0;i<n;i++)
	{
		putchar(ptr);
		ptr++;
	}
	return 0;
	
}
