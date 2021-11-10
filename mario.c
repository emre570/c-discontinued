#include <stdio.h>

int main(void)
{
    int yukseklik;
    int bosluk;
    int blok;

    do
    {
        yukseklik = printf("Yukseklik:");
        scanf("%i", &yukseklik);
    }
    while(yukseklik<=0 || yukseklik>=8);



    for(int i=0; i<yukseklik; i++)
    {

        for(bosluk = (yukseklik-i); bosluk>=2; bosluk--)
        {
            printf("");
        }

        for(blok=0; blok<(i+1); blok++)
        {
            printf("#");
        }
     printf("\n");    
    }
}