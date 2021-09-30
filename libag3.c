#include "libag3.h"
#include <stdio.h>

void shift_seed(void *seed_buff, char *header_prefix, int32_t length, int32_t shifted_bytes_count, void *out_buff) {

    char cmp = shifted_bytes_count > 0;
    char cmp1 = length > 0;
    cmp1 = cmp1 ^ cmp;

    if(cmp != 0) {
        printf("switch 0xb");
    }
    
}