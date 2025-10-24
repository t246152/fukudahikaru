#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("double maximum:%g\n",DBL_MAX);
    printf("double minimum:%g\n",DBL_MIN);
    printf("double precision:%d\n",DBL_DIG);
    printf("int maximum:%d\n",INT_MAX);
    printf("int minimum:%d\n",INT_MIN);
    printf("int maximum:%u\n",UINT_MAX);
    printf("char maximum:%d\n",CHAR_MAX);
    printf("char minimum:%d\n",CHAR_MIN);
    printf("char maximum:%d\n",UCHAR_MAX);
    printf("short int maximum:%d\n",SHRT_MAX);
    printf("short int minimum:%d\n",SHRT_MIN);
    printf("short int maximum:%d\n",USHRT_MAX);
    printf("long int maximum:%ld\n",LONG_MAX);
    printf("long int minimum:%ld\n",LONG_MIN);
    printf("long int maximum:%lu\n",ULONG_MAX);
    printf("long long int maximum:%lli\n",LLONG_MAX);
    printf("long long int minimum:%lli\n",LLONG_MIN);
    printf("long long int maximum:%llu\n",ULLONG_MAX);
    printf("float maximum:%g\n",FLT_MAX);
    printf("float minimum:%g\n",FLT_MIN);
    printf("float precision:%d\n",FLT_DIG);
    printf("long double maximum:%Le\n",LDBL_MAX);
    printf("long double minimum:%Le\n",LDBL_MIN);
    printf("long double precision:%d\n",LDBL_DIG);
    

    return 0;
}