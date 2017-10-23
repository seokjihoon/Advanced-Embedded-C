#include <stdio.h>

struct st
{
    int a;
    char *b;
}x={100,"HELLO"};

struct st *p = &x;

int main()
{
    printf("%d\n", (*p).a);
    printf("%s\n", (*p).b);
    printf("%c\n", (*p).b[1]);
    printf("%c\n", *((*p).b));
    
    return 0;
}
