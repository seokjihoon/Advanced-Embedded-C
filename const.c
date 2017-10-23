#include <stdio.h>

int func(int * const p)
{
    p++;            //int * const p : cannot changable
    *p = 20;        //const int * p : cannot changable
    return *p;
}
int main()
{

    return 0;
}
