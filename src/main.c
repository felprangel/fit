#include <stdio.h>

#include "init.h"

void main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("USAGE: fit <command> [<args>]\n");
    }

    initialize_repository();

    printf("Hello World\n");
}