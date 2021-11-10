#include <stdio.h>

void set_dizi(int dizi[4]);
void set_int(int x);

int main(void)
{
    int a = 10;
    int b[4] = {0, 1, 2, 3};
    set_int(a);
    set_dizi(b);
    printf("%d %d\n", a, b[0]);
}

void set_dizi(int dizi[4])
{
    dizi[0] = 22;
}

void set_int(int x)
{
    x = 22;
}