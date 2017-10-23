#if 0
#include <stdio.h>

int main()
{
    int *p;
    int q[4];
    p = q;
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int **p;
    int *q[4];
    p = q;
}
#endif

#if 1
#include <stdio.h>

int main()
{
    int (*p)[4];
    int q[3][4];
    p = q;
    return 0;
}
#endif

#if 0
/*ERROR*/
#include <stdio.h>

int main()
{
    char (*(*p)())[4];
    char (*q(void))[4];
    p = q;
    return 0;
}
#endif
