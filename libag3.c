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

void weird_func(char *arg1, char* arg2) {

}

void shift_seed(char* seed_buff, char* header_prefix, int32_t length, int32_t shifted_bytes_count, char* out_buff) {

    int index = 0;

    while(index < shifted_bytes_count) {
        unsigned char w11 = *(seed_buff + index);
        unsigned char w12 = *(header_prefix + index);

        *(out_buff+index) = (w11 & ~w12) | (w12 & ~w11);
        index++;
    }

    while(index < length) {
        *(out_buff+index) = *(seed_buff+index);
        index++;
    }

    if(1) return;

    int done = 0;
    int switchCase = 0x19;

    int64_t var_28 = 0;
    int64_t var_20 = 0; // length
    int64_t var_18 = 0; // shifted_bytes_count

    while(!done) {

        printf("switchCase=%d\n", switchCase);

        switch(switchCase) {

            case 0:;

                var_18 = (int64_t)shifted_bytes_count;
                var_20 = (int64_t)length;

                int64_t x10_65 = var_20 - (((int64_t) shifted_bytes_count) << 1);
                int64_t x10_66 = var_18;
                if((uint64_t) x10_65 > (uint64_t)var_20)
                    x10_66 = x10_65;

                x10_66 = x10_66 - (x10_66 << 1); 

                switchCase = 0x1a;
                continue;

            case 0x19:;
                int x11_68 = shifted_bytes_count > 0;
                int x12_46 = length > 0;
                if ((x12_46 & (x12_46 ^ x11_68)) != 0)
                    switchCase = 0;
                else 
                    switchCase = 7;
                continue;

            case 0x1a:
                done = 1;
                break;

        }

    }
}