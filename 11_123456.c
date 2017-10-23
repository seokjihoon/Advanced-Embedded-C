#include <stdio.h>

struct st
{
    int a;
    char*b;
}x[2] = {{10, "0123456"},{20,"ABCD"}};

struct st *func(struct st *y)
{
    y->a++;
    y->b++;
    
    return y++;
}
int main()
{
    struct st *p = x;
    p = func(p);
    printf("%d, %s\n", x->a, p->b);
}
