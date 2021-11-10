#include <stdio.h>

int main(void)
{
    int s = 0;
    int tm = 0;
    int maas;
    
    //5 kişinin maaşlarını sorup toplar.
    do
    {
        printf("Maas:");
        scanf("%i", &maas);
        tm = tm + maas;
        s = s + 1;
    } while (s < 5);

    printf("toplam:%d", tm);
        
}