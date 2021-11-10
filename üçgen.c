#include <stdio.h>

float ucgen(float x, float y, float z);

int main(void)
{
    float ucgen(float x, float y, float z);
    
    float x = printf("Ilk Kenar:");
    scanf("%f", &x);

    float y = printf("Ikinci Kenar:");
    scanf("%f", &y);

    float z = printf("Ucuncu Kenar:");
    scanf("%f", &z);
}

float ucgen(float x, float y, float z)
{
    if(x <= 0 || y <= 0 || z <= 0)
    {
        return 0;
    }

    if((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return 0;
    }

    return kenar;
}   