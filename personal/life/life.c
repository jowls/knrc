#include <stdio.h>

#define SIZE 10

void Initialize( char world[][]);

main()
{
    char world[ SIZE ][ SIZE ];

    Initialize( world );

}

void Initialize ( char world[][] )
{
    int i, j;
    for ( i = 0; i < SIZE; ++i )
    {
        for ( j = 0; j < SIZE; ++j )
        {
            world[i][j] = '*';
        }
    }
}