#include<stdio.h>
#include<stdlib.h>
int *dizileri_birlestir(int dizi1[], int boyut1, int dizi2[], int boyut2)
{
    int *sonuc = (int *)calloc(boyut1 + boyut2, sizeof(int));
    int i, k = 0, g = 0;

    for (i = 0; i < boyut1 + boyut2; i++)
    {
        if (g < boyut1 && (k >= boyut2 || dizi1[g] <= dizi2[k]))
        {
            sonuc[i] = dizi1[g];
            g++;
        }
        else
        {
            sonuc[i] = dizi2[k];
            k++;
        }
    }

    return sonuc;
}

int main(void)
{
	int i;
	int liste_1[5]={6,12,15,18,24};
	int liste_2[7]={1,5,7,11,14,16,25};
	int *ptr;
	ptr = dizileri_birlestir(liste_1,5,liste_2,7);
	for(i=0; i<12; i++)
	{
		printf("%d\n", ptr[i]);
	}
	free(ptr);
	return 0;
	
}
