#include <stdio.h>

typedef int (*FP1)[2][3];

FP1 func(void)
{
    static int a[2][3] = {1,2,3,4,5,6};
    return &a;
}
int main()
{
    printf("%d", (*(func()-1))[3][2]);
    
    return 0;
}