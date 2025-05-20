#include <stdio.h>

#include "init.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("USAGE: fit <command> [<args>]\n");
        return 1;
    }

    initialize_repository();

    printf("Hello World\n");
}