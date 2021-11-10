//Bu kod yazdığınız kelimenin, kelimelerin kaç harf olduğunu gösterir. 
#include <stdio.h>
#include <string.h>

int main (void)
{
    //Bu satırlar ismi alır.
    char isim[100];
    printf("Isim:");
    gets(isim);
    
    //Bu satırlar kaç harf olduğunu yazar.
    int n = 0;
    while(isim[n] !='\0')
    {
        n++;
    }
    printf("Isminiz %i harfli.\n", n);
}