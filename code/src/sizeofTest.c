#include<stdio.h>

/*
 * A sample program to test all the size of inbuilt data type in C.
 * */

int main()
{
//    printf("[AniB]: sizeof(bool) = %d\n",(int)sizeof(bool));
    printf("[AniB]: sizeof(char) = %d\n",(int)sizeof(char));
    printf("[AniB]: sizeof(short) = %d\n", (int)sizeof(short));
    printf("[AniB]: sizeof(int) = %d\n",(int)sizeof(int));
    printf("[AniB]: sizeof(long) = %d\n",(int)sizeof(long));
    printf("[AniB]: sizeof(float) = %d\n",(int)sizeof(float));
    printf("[AniB]: sizeof(double) = %d\n",(int)sizeof(double));
    /*
     *  Output::
     *  [AniB]: sizeof(char) = 1
     *  [AniB]: sizeof(short) = 2
     *  [AniB]: sizeof(int) = 4
     *  [AniB]: sizeof(long) = 8
     *  [AniB]: sizeof(float) = 4
     *  [AniB]: sizeof(double) = 8
     * */
    return 0;
}
