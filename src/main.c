#include <stdio.h>
#include <string.h>

#include "init.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("USAGE: fit <command> [<args>]\n");
        return 1;
    }

    if (strcmp(argv[1], "init") == 0)
    {
        initialize_repository();
        return 0;
    }

    printf("%s is not a fit command.\n", argv[1]);
    return 1;
}