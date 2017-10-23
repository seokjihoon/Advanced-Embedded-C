#include <stdio.h>

int main()
{
    int a[4] = {1,2,3,4};
    signed char c = 0xff;
    if(a[0]-a[1]<sizeof(a)) c++;
    else c--;
    printf("%x", c);
}
