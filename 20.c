#include <stdio.h>

int main()
{
    int a[4] = {10,20,30,40};
    printf("%d", *(*(&a+1)-3));
}
