#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

#define FIT_DIR ".fit"
#define FIT_OBJECTS_DIR ".fit/objects"
#define DIRECTORY_PERMISSIONS 0755

void initialize_repository(void)
{
    if (access(FIT_DIR, F_OK))
    {
        printf("Repository already exists\n");
        return;
    }

    if (mkdir(FIT_DIR, DIRECTORY_PERMISSIONS) == 0)
    {
        if (mkdir(FIT_OBJECTS_DIR, DIRECTORY_PERMISSIONS) == 0)
        {
            printf("Initialized empty Fit repository\n");
        }
    } else
    {
        printf("Error creating Fit repository\n");
    }
}