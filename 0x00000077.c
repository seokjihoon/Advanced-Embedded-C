#include <stdio.h>

struct st
{
    unsigned int a1 : 5;
    unsigned int    : 1;
    unsigned int a2 : 4;
};

union ui
{
    unsigned int a1 : 8;
    unsigned int a2 : 4;
    struct st b;
}b = {0x64};

int main()
{
    b.b.a1 = 0x17;
    printf("0x%.8x",*(unsigned int*)&b);
    return 0;
}