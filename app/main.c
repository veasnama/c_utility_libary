#include <stdlib.h>
#include <../common/header_file.h>
#include <src/filesize.h>
#include <src/byte_converter.h>
int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s must provide", argv[1]);
        return EXIT_FAILURE;
    }

    LONG_DOUBLE value = ByteToKilloByte(1, BYTE_TO_KBYTE);
    printf("1 byte to kbyte : %f\n", value);
    const char *file_name = argv[1];
    printf("File Size: %ld bytes\n", getFileSize1(file_name));
    printf("File Size: %ld bytes\n", getFileSize2(file_name));

    return EXIT_SUCCESS;
}