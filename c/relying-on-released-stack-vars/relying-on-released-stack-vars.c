#include <stdio.h>


int f(int **ppi)
{
    int    n  = 5;   // sizeof(n)   = 4 bytes; offset n   = 36 bytes
    int  *pn  = &n;  // sizeof(pn)  = 8 bytes; offset pn  = 24 bytes
    int **ppn = &pn; // sizeof(ppn) = 8 bytes; offset ppn = 16 bytes
                     // sizeof(ppi) = 8 bytes; offset ppi =  0 bytes
    
    (*ppi) = (*ppn);

    printf("f(): &ppi: %p\n", &ppi);
    printf("f(): &ppn: %p\n", &ppn);
    printf("f(): &pn : %p\n", &pn);
    printf("f(): &n  : %p\n", &n);
}


int g(int **ppi)
{
    int     m = 10;  // sizeof(m)    = 4 bytes; offset m   = 32 bytes
    int   *pm = &m;  // sizeof(pm)   = 8 bytes; offset pm  = 24 bytes
    int **ppm = &pm; // sizeof(ppmm) = 8 bytes; offset ppm = 16 bytes
                     // sizeof(ppi)  = 8 bytes; offset ppi =  0 bytes

    printf("g(): &ppi: %p\n", &ppi);
    printf("g(): &ppm: %p\n", &ppm);
    printf("g(): &pm : %p\n", &pm);
    printf("g(): &m  : %p\n", &m);
}


int main(int argc, char *argv[])
{
    int *i = NULL;

    f(&i);
    printf("after f(): *i: %d\n", *i);

    g(&i);
    printf("after g(): *i: %d\n", *i);

    return 0;
}

