#include <stdio.h>

int main()
{
    int a = 0x12, b = 0x34;
    printf("%x\n", (a&b)^a);
    return 0;
}
