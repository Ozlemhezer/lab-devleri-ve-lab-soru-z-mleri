#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=5;
	char *ptr = (char *)malloc(n*sizeof(char));
	
	ptr = (char *)realloc (ptr, 20*sizeof(char));

	
	
	
}
