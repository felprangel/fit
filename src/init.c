#include <stdio.h>
#include <sys/stat.h>

#define FIT_DIRECTORY ".fit"
#define DIRECTORY_PERMISSIONS 0755

void initialize_repository(void)
{
    if (mkdir(FIT_DIRECTORY, DIRECTORY_PERMISSIONS) == 0)
    {
        printf("Pasta criada\n");
    } else
    {
        printf("Erro ao criar pasta\n");
    }
}