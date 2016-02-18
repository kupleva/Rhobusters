#include <stdio.h>
#include "types.h"
#include "debug.h"

void debug_print_bool(BOOL param)
{
    if (TRUE == param)
    {
        printf("param is TRUE (%d); ~FALSE=%d\n", param, ~FALSE);
    }
    else
    {
        printf("param is FALSE (%d); TRUE=%d\n", param, TRUE);
    }
}

