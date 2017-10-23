#include <stdio.h>

int main()
{
    char *src = "\\%dFighting";
    char dst[16] = "ABCD";
    char *p = dst;
    printf("%c %c\n", *src, *(src));
    while(*++p);
    while(*p++=*++src);
    
    printf(dst, sizeof(src));
}
