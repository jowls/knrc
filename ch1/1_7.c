#include <stdio.h>

int Power(int m, int n);

/* test power function */
main()
{
    int i;
    
    for ( i = 0; i < 10; ++i )
    {
        printf( "%d %d %d\n", i, Power( 2, i ), Power( -3, i ) );
    }
    return 0;               
}

int Power( int base, int n )
{
    int i, p;
    
    p = 1;
    for ( i = 1; i <= n; ++i )
    {
        p = p * base;        
    }
    return p;
}