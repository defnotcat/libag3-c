#include "libag3.h"
#include <stdio.h>

void other_weird_func(char* buffer, char* seed) {
    int64_t temp = 0x14279e1a9c4244a2;

    memcpy(buffer, seed + 8, 4);
    memcpy(buffer + 4, seed + 0x1c, 4);
    memcpy(buffer + 8, &temp, 8);
    memcpy(buffer + 16, seed, 4);
    temp = -0x2578203ffb526328;
    memcpy(buffer + 24, &temp, 8);
    temp = 0xa9ae6a6d;
    memcpy(buffer + 32, &temp, 4);
    memcpy(buffer + 20, seed + 12, 4);
    memcpy(buffer + 36, seed + 24, 4);
    memcpy(buffer + 40, seed + 16, 4);
    memcpy(buffer + 44, seed + 4, 4);
    temp = 0x2e1f1e1241286005;
    memcpy(buffer + 52, &temp, 8);
    temp = 0x854aa1c;
    memcpy(buffer + 60, &temp, 4);
    memcpy(buffer + 48, seed + 20, 4);
}

void shift_seed(void* seed_buff, char* header_prefix, int32_t length, int32_t shifted_bytes_count, void* out_buff) {

    char cmp = shifted_bytes_count > 0;
    char cmp1 = length > 0;
    cmp1 = cmp1 ^ cmp;

    printf("cmp=%d, cmp1=%d\n", cmp, cmp1);

    if (cmp != 0) {
        printf("switch 0xb");
    }

}