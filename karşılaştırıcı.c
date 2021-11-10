#include <stdio.h>

int main(void)
{
    float x = printf("x:");
    scanf("%d", &x);

    float y = printf("y:");
    scanf("%d", &y);

    if (x<y)
    {
        printf("x, y'den kucuktur.\n");
    }
    else if(x>y)
    {
        printf("x, y'den buyuktur.\n");
    }
    else
    {
        printf("x, y ile esittir.\n");
    }
}
