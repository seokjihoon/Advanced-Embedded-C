#include <stdio.h>

int main()
{
    int a[4] = {1,2,3,4};
    
    if(a[0]-a[1] < sizeof(a))
    {
        printf("%d\n", a[sizeof(char)]);
    }
    else
    {
        printf("%d\n",a[sizeof(short)]);
    }
}