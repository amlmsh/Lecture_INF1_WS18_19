#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(float x = -1.0; x < 1.0; x = x + 0.1)
    {
        printf("f = %.2f \n", x);
        if( x == 0.0)
        {
            break;
        }
    }
    return 0;
}
