#include <stdio.h>

int main(void)
{
    int n = printf("dizi:");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Gecersiz terim sayısı.\n");
    }

    int dizi[n]; 

    for(int i = 0; i < n; i++)
    {   
        printf("terim %d: %d\n", dizi[n]);
    }
}