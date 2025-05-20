#include <stdio.h>
#include <sys/stat.h>

void initialize_repository(void)
{
    if (mkdir(".fit", 0755) == 0)
    {
        printf("Pasta criada\n");
    } else
    {
        printf("Erro ao criar pasta\n");
    }
}