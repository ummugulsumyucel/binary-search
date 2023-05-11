#include <stdio.h>
#include <stdlib.h>

int binarySearch(int dizi[], int sol, int sag, int arananEleman)
{
    while (sol <= sag) {
        int orta = sol + (sag-sol) / 2;
 
        if (dizi[orta] == arananEleman)
            return orta;
 
        if (dizi[orta] < arananEleman)
            sol = orta+ 1;
 
        else
            sag = orta - 1;
    }
    return -1;
}
 
int main(void)
{
	int arananEleman;
    int dizi[] = {3,4,8,9,24,47,68,76,84};
    printf("aramak istediginiz elemani giriniz:\n");
    scanf("%d",&arananEleman);
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int sonuc = binarySearch(dizi, 0, n - 1, arananEleman);
    if(sonuc == -1) 
	 printf("Aradiginiz eleman dizide bulunmamaktadir.");
	 else
    printf("Aradiginiz eleman %d. indexte bulunmaktadir.",sonuc);
    return 0;
}
