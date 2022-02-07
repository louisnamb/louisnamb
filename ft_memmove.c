#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    char str[] = "memmove can be very useful......";
    printf("dest: %s\n", str + 10);
    printf("src: %s\n", str + 15);
    char *dest = str+10;
    char *ptr = str+15;
    printf("memmoved: %s\n", memmove(dest,ptr,7));

    //very usry useful......
    //copies len bytes of source, then appends those bytes to the appointed beginning of dest.
    //example:
    //src: very useful......
    //dest: n be very useful......
    //1. copy len bytes of source, in this case 7, so there4 we copy "very us"
    //2. then we append those bytes to the appointed beginning of dest in this 
    // case starting from n and we're deleting the first len characters and 
    // pasting them with the len character we copies from src.
    //3.
    return (0);
}