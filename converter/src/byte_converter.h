#define ONE_KBYTE_TO_BYTE (10 * 10 * 10);
typedef long long LONG_LONG;
typedef double LONG_DOUBLE;

enum ByteError
{
    ByteOverFlow = 0,
    ByteUnderFlow
};
enum DecimalBinary
{
    Decimal = 1000,
    Binary = 1024
};

static const char *const ByteErrorMessage[] = {
    [ByteOverFlow] = "ByteOverFlow",
    [ByteUnderFlow] = "ByteUnderFlow"};
struct ByteConverter
{
    enum ByteType
    {
        BYTE,
        KBYTE_TO_BYTE,
        MegaByte,
        GigaByte,
        TeraByte,
        PetaByte,
        ExaByte,
        ZettaByte,
        YottaByte
    } byte_type;
    enum ByteCType
    {
        BYTE_TO_KBYTE,
        BYTE_TO_MBYTE,
        BYTE_TO_GBYTE,
        BYTE_TO_TBYTE,
        BYTE_TO_PBYTE,
        BYTE_TO_EBYTE,
        BYTE_TO_ZBYTE,
        BYTE_TO_YBYTE,
    } byte_c_type;
} byte_convert;
typedef enum DecimalBinary DecBin;
LONG_DOUBLE ByteToKilloByte(LONG_DOUBLE VALUE, enum ByteCType type)
{
    LONG_DOUBLE temp_value;
    byte_convert.byte_c_type = type;
    switch (byte_convert.byte_c_type)
    {
    case BYTE_TO_KBYTE:
        puts("this condition met");
        printf("value 1:%d\nvalue 2:%d \n", Decimal, Binary);

        temp_value = (LONG_DOUBLE)VALUE / 1024;
        break;

    default:
        break;
    }
    return temp_value;
}
