#include <stdio.h>
#include <sys/stat.h>

#define FIT_DIR ".fit"
#define FIT_OBJECTS_DIR ".fit/objects"
#define DIRECTORY_PERMISSIONS 0755

void initialize_repository(void)
{
    if (mkdir(FIT_DIR, DIRECTORY_PERMISSIONS) == 0)
    {
        if (mkdir(FIT_OBJECTS_DIR, DIRECTORY_PERMISSIONS) == 0)
        {
            printf("Initialized empty Fit repository\n");
        }
    } else
    {
        printf("Erro ao inicializar repositório fit\n");
    }
}