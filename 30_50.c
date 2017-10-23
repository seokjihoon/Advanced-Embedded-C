#include <stdio.h>

int main()
{
    int buf[] = {10,20,30,40,50,60,70,80,11,22,33,44};
    
    int (*p)[4] = (int(*)[4])buf;
    int (*q)[2][3] = (int (*)[2][3])buf;
    
    printf("%d %d", p[1][-2], q[-1][3][1]);
}
