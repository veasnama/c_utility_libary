#include "../common/header_file.h"
long getFileSize1(const char *filename)
{
    struct stat file_status;
    if (stat(filename, &file_status) == 0)
    {
        return file_status.st_size;
    }
    return RESULT_ERROR;
}
long getFileSize2(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        return RESULT_ERROR;
    }
    if (fseek(file, 0L, SEEK_END) < 0)
    {
        return RESULT_ERROR;
    }
    long length = ftell(file);
    return length;
}
