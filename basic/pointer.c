#include <stdio.h>

void main()
{

    int x = 10, *y;
    y = &x;
    printf("%d and %d", x, *y);
}