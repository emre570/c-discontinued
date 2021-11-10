#include <stdio.h>

int iki_tamsayi(int x, int y);

int main(void)
{
    int x = printf("Sayi 1:");
    scanf("%i", &x);

    int y = printf("Sayi 2:");
    scanf("%i", &y);

    int z = iki_tamsayi(x, y); 

    printf("%i ve %i'nin toplami %i.\n", x, y, z);
}

int iki_tamsayi(int x, int y)
{
    int toplam = x + y;
    return toplam;
}
