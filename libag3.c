#include "libag3.h"
#include <stdio.h>
#include <smmintrin.h>

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

static inline int32_t rotate_right(int32_t u, size_t r)
{
    __asm__("rorl %%cl, %0" : "+r" (u) : "c" (r));
    return u;
}

void weird_func(char* seed, char* buffer) {

    char* var_b0 = seed;
    int32_t x8_1;
    int32_t x8;
    int32_t x4;
    int32_t x5;
    memcpy(&x8_1, var_b0, 4);
    memcpy(&x8, var_b0 + 4, 4);
    memcpy(&x4, var_b0 + 8, 4);
    memcpy(&x5, var_b0 + 0xc, 4);

    char* v1 = (seed + 0x10);
    int32_t x20;
    int32_t x19;
    int32_t x7;
    int32_t x6;
    memcpy(&x20, v1, 4);
    memcpy(&x19, v1 + 4, 4);
    memcpy(&x7, v1 + 8, 4);
    memcpy(&x6, v1 + 0xc, 4);

    char* var_90 = seed + 0x20;
    char* var_80 = seed + 0x30;

    // case 4
    int32_t var_104;
    memcpy(&var_104, var_90 + 4, 4);

    // case 5
    int32_t var_10c;
    int32_t var_108;
    int32_t var_110;
    int32_t var_118;
    int32_t var_114;
    int32_t var_120;
    int32_t var_11c;
    int32_t var_17c;
    int32_t var_124 = 0x2f1; // data_196c04
    memcpy(&var_10c, var_90 + 0xc, 4);
    memcpy(&var_108, var_90, 4);
    memcpy(&var_110, var_90 + 8, 4);

    memcpy(&var_118, var_80 + 0xc, 4);
    memcpy(&var_114, var_80, 4);
    memcpy(&var_120, var_80 + 8, 4);
    memcpy(&var_11c, var_80 + 4, 4);
    var_17c = 1;

    // case 8
    int32_t x8_13 = (var_124 + 1) * var_124;
    int32_t x8_14 = (x8_13 ^ 0xfffffffe) & x8_13;
    int32_t x8_16 = (x8_14 | 1) & (~x8_14 | 0xfffffffe);
    var_17c = x8_16;

    // case 9

    // case 7
    int32_t var_164 = x8_1;
    int32_t var_150 = x19;
    int32_t var_14c = x20;
    int32_t var_158 = x6;
    int32_t var_154 = x7;
    int32_t var_160 = x4;
    int32_t var_15c = x5;
    int32_t var_168 = x8;
    int32_t var_130 = var_11c;
    int32_t var_12c = var_120;
    int32_t var_138 = var_114;
    int32_t var_134 = var_118;
    int32_t var_140 = var_10c;
    int32_t var_13c = var_110;
    int32_t var_148 = var_104;
    int32_t var_144 = var_108;
    int32_t x8_2 = 0x12;
    int32_t var_16c = x8_2;

    int32_t var_e4, var_b4, var_e8, var_ec, 
            var_c4, var_b8, var_c8, var_bc,
            var_cc, var_dc, var_d8, var_f0,
            var_c0, var_d0, var_e0;
    int32_t var_d4 = 0x25caf959;

    // case 1
    // while(1) { }

    while (var_16c > 2) {

        var_16c = x8_2;

        int32_t x24_1 = ~var_15c;
        int32_t x11_26 = (var_154 | var_158) + (var_154 & var_158);
        int32_t x17_3 = var_16c ^ 0xfffffffe; // not sure abt var_16c
        int32_t x8_29 = var_164 - ~var_168;
        int32_t x9_63 = var_144 - ~var_148;
        int32_t x13_29 = (var_134 ^ var_138) + ((var_134 & var_138) << 1); // is ok
        int32_t x16_4 = var_16c << 1 | 0xfffffffc;
        // repeat case 1 if var_16c > 2
        x8_2 = x16_4 - x17_3;

        int32_t x16_7 = rotate_right((var_150 | x11_26) & ~(var_150 & x11_26), 0xd);
        int32_t x2_6 = rotate_right((x13_29 & ~var_130) | (var_130 & ~x13_29), 0xd);
        int32_t x14_5 = rotate_right(((x8_29 - 1) & ~(var_160)) | (var_160 & ~(x8_29 - 1)), 0xd);
        int32_t x17_7 = rotate_right((var_140 | (x9_63 - 1)) & ~(var_140 & (x9_63 - 1)), 0xd);
        int32_t x21_4 = (x16_7 | var_14c) + (x16_7 & var_14c);
        int32_t x18_3 = ((x2_6 | var_12c) << 1) - (x2_6 ^ var_12c);
        int32_t x15_4 = ((x17_7 | var_13c) << 1) - (x17_7 ^ var_13c);
        int32_t x23_6 = rotate_right((var_154 & ~(x21_4)) | (x21_4 & ~(var_154)), 0x12);
        int32_t x25_4 = rotate_right(((x14_5 - x24_1 - 1) | var_164) & ~((x14_5 - x24_1 - 1) & var_164), 0x12);
        int32_t x22_9 = rotate_right((x18_3 | var_134) & ~(x18_3 & var_134), 0x12);
        int32_t x11_28 = (x23_6 | x11_26) + (x23_6 & x11_26);
        int32_t x26_4 = rotate_right((var_144 & ~(x15_4)) | (x15_4 & ~(var_144)), 0x12);
        int32_t x3_6 = (x25_4 | (x8_29 - 1)) + (x25_4 & (x8_29 - 1));
        int32_t x13_31 = (x22_9 ^ x13_29) + ((x22_9 & x13_29) << 1);
        int32_t x9_66 = (x26_4 | (x9_63 - 1)) + (x26_4 & (x9_63 - 1));
        int32_t x16_10 = rotate_right((x16_7 & ~(x11_28)) | (x11_28 & ~(x16_7)), 0x1d);
        int32_t x14_8 = rotate_right((x14_5 & ~(x3_6)) | (x3_6 & ~(x14_5)), 0x1d);
        int32_t x21_6 = (x16_10 ^ x21_4) + ((x16_10 & x21_4) << 1);
        int32_t x17_10 = rotate_right((x17_7 & ~(x9_66)) | (x9_66 & ~(x17_7)), 0x1d);
        int32_t x2_9 = rotate_right((x13_31 | x2_6) & ~(x13_31 & x2_6), 0x1d);
        int32_t x14_10 = (x11_28 ^ x14_8) + ((x11_28 & x14_8) << 1);
        int32_t x3_8 = (x21_6 | x3_6) + (x21_6 & x3_6);
        int32_t x15_6 = ((x17_10 | x15_4) << 1) - (x17_10 ^ x15_4);
        int32_t x23_9 = rotate_right((x23_6 & ~(x21_6)) | (x21_6 & ~(x23_6)), 0x16);
        int32_t x24_8 = ((x16_10 | (x14_8 - ~(x14_5 - x24_1 - 1) - 1)) << 1) - (x16_10 ^ (x14_8 - ~(x14_5 - x24_1 - 1) - 1));
        int32_t x22_12 = rotate_right((x22_9 & ~(x2_9 - ~(x18_3)-1)) | ((x2_9 - ~(x18_3)-1) & ~(x22_9)), 0x16);
        int32_t x13_34 = rotate_right((x14_10 & ~(x13_31)) | (x13_31 & ~(x14_10)), 0xd);
        int32_t x25_9 = x23_9 - (0xffffffff ^ rotate_right(((x14_8 - ~(x14_5 - x24_1 - 1) - 1) | x25_4) & ~((x14_8 - ~(x14_5 - x24_1 - 1) - 1) & x25_4), 0x16)) - 1;
        int32_t x18_9 = rotate_right((x24_8 & ~(x2_9 - ~(x18_3)-1)) | ((x2_9 - ~(x18_3)-1) & ~(x24_8)), 0xd);
        int32_t x15_8 = (x13_34 ^ x15_6) + ((x13_34 & x15_6) << 1);
        int32_t x22_15 = rotate_right((x22_12 | x3_8) & ~(x22_12 & x3_8), 0xd);
        int32_t x17_12 = (x18_9 ^ x17_10) + ((x18_9 & x17_10) << 1);
        int32_t x2_12 = rotate_right((x2_9 | x25_9) & ~(x2_9 & x25_9), 0xd);
        int32_t x11_31 = rotate_right((x11_28 & ~(x15_8)) | (x15_8 & ~(x11_28)), 0x12);
        int32_t x17_14 = (x21_6 & ~(x22_15 - (0xffffffff ^ rotate_right((x15_6 | x26_4) & ~(x15_6 & x26_4), 0x16)) - 1)) | ((x22_15 - (0xffffffff ^ rotate_right((x15_6 | x26_4) & ~(x15_6 & x26_4), 0x16)) - 1) & ~(x21_6));
        int32_t x9_68 = (x2_12 | x9_66) + (x2_12 & x9_66);
        int32_t x16_13 = rotate_right((x16_10 & ~(x17_12)) | (x17_12 & ~(x16_10)), 0x12);
        int32_t x17_15 = rotate_right(x17_14, 0x12);
        var_e4 = x11_31 - ~(x14_10)-1;
        var_160 = x11_31 - ~(x14_10)-1;
        int32_t x3_10 = (x17_15 | x3_8) + (x17_15 & x3_8);
        int32_t x21_10 = rotate_right((x9_68 | x23_9) & ~(x9_68 & x23_9), 0x12);
        int32_t x13_37 = rotate_right(((x11_31 - ~(x14_10)-1) | x13_34) & ~((x11_31 - ~(x14_10)-1) & x13_34), 0x1d);
        var_b4 = x16_13 - ~(x24_8)-1;
        var_e8 = x13_37;
        var_138 = x13_37;
        int32_t x18_11 = (x21_10 | x25_9) + (x21_10 & x25_9);
        int32_t x15_10 = (x13_37 ^ x15_8) + ((x13_37 & x15_8) << 1);
        int32_t x13_39 = rotate_right((x18_9 & ~(x16_13 - ~(x24_8)-1)) | ((x16_13 - ~(x24_8)-1) & ~(x18_9)), 0x1d);
        int32_t x14_18 = rotate_right((x22_15 & ~(x3_10)) | (x3_10 & ~(x22_15)), 0x1d);
        var_d4 = x18_11;
        var_d4 = x18_11;
        var_ec = x15_10;
        var_13c = x15_10;
        var_164 = x18_11;
        var_c4 = x3_10;
        var_168 = x3_10;
        var_b8 = x13_39;
        var_c8 = x14_18;
        var_12c = x13_39;
        var_134 = x14_18;
        int32_t x14_19 = (x14_18 | (x22_15 - (0xffffffff ^ rotate_right((x15_6 | x26_4) & ~(x15_6 & x26_4), 0x16)) - 1)) + (x14_18 & (x22_15 - (0xffffffff ^ rotate_right((x15_6 | x26_4) & ~(x15_6 & x26_4), 0x16)) - 1));
        int32_t x15_12 = rotate_right((x2_12 & ~(x18_11)) | (x18_11 & ~(x2_12)), 0x1d);
        var_bc = x13_39 - ~(x17_12) - 1;
        var_144 = x14_19;
        var_140 = x13_39 - ~(x17_12) - 1;
        int32_t x9_70 = (x15_12 | x9_68) + (x15_12 & x9_68);
        int32_t x11_34 = rotate_right((x15_10 | x11_31) & ~(x15_10 & x11_31), 0x16);
        var_cc = x14_19;
        var_130 = x15_12;
        int32_t x13_42 = rotate_right((x17_15 & ~(x14_19)) | (x14_19 & ~(x17_15)), 0x16);
        var_dc = x9_70;
        var_d8 = x15_12;
        var_f0 = x11_34;
        var_15c = var_b4;
        var_158 = x11_34;
        var_14c = x13_42;
        var_148 = x9_70;
        int32_t x11_36 = rotate_right(((x13_39 - ~(x17_12) - 1) | x16_13) & ~((x13_39 - ~(x17_12) - 1) & x16_13), 0x16);
        int32_t x9_72 = rotate_right((x9_70 | x21_10) & ~(x9_70 & x21_10), 0x16);
        int32_t var_f4_1 = x8_2;
        var_c0 = x11_36;
        var_d0 = x13_42;
        var_e0 = x9_72;
        var_154 = x9_72;
        var_150 = x11_36;

        printf("var_d4 = %02X\n", var_d4);

        printf("x2_6=%d, var_150=%02X, x11_26=%02X, temp=, x9_63=%02X, x13_29=%02X, x16_7=%02X\n", x2_6, var_150, x11_26, x9_63, x13_29, x16_7);
        printf("var_11c=%02X, var_130=%02X, x2_6=%d\n", var_11c, var_130, (x13_29 & ~var_130) | (var_130 & ~x13_29));
    }

    int32_t x8_20 = (x8_1 | var_d4) + (x8_1 & var_d4);
    printf("final var_d4 = %02X\n", var_d4);
    memcpy(buffer, &x8_20, 4);
    printf("first byte = %02X", *(&x8_20));

}

void shift_seed(char* seed_buff, char* header_prefix, int32_t length, int32_t shifted_bytes_count, char* out_buff) {

    int index = 0;

    while (index < shifted_bytes_count) {
        unsigned char w11 = *(seed_buff + index);
        unsigned char w12 = *(header_prefix + index);

        *(out_buff + index) = (w11 & ~w12) | (w12 & ~w11);
        index++;
    }

    while (index < length) {
        *(out_buff + index) = *(seed_buff + index);
        index++;
    }
}

void encode_bytes(char* seed, char* string, char* buffer, int32_t length) {

}

void encode_string(char* seed, char* string, char* header, char* buffer, int length) {

    char* shifted_seed = malloc(32);
    shift_seed(seed, header, 32, strlen(header), shifted_seed);

    encode_bytes(shifted_seed, string, buffer, length);
}