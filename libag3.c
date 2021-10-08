#include "libag3.h"

static inline int32_t rotate_right(int32_t u, size_t r)
{
    __asm__("rorl %%cl, %0" : "+r" (u) : "c" (r));
    return u;
}

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

void weird_func(char* seed, char* buffer) {

    int32_t x8_1;
    int32_t x8;
    int32_t x4;
    int32_t x5;
    memcpy(&x8_1, seed, 4);
    memcpy(&x8, seed + 4, 4);
    memcpy(&x4, seed + 8, 4);
    memcpy(&x5, seed + 0xc, 4);

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
    memcpy(&var_108, var_90, 4);
    memcpy(&var_110, var_90 + 8, 4);
    memcpy(&var_10c, var_90 + 12, 4);

    memcpy(&var_114, var_80, 4);
    memcpy(&var_11c, var_80 + 4, 4);
    memcpy(&var_120, var_80 + 8, 4);
    memcpy(&var_118, var_80 + 12, 4);
    var_17c = 1;

    // case 8
    int32_t x8_13 = (var_124 + 1) * var_124;
    int32_t x8_14 = (x8_13 ^ 0xfffffffe) & x8_13;
    int32_t x8_16 = (x8_14 | 1) & (~x8_14 | 0xfffffffe);
    var_17c = x8_16;

    // case 9

    // case 7
    int32_t var_164 = x8_1; // value match
    int32_t var_150 = x19; // value match: 0x19fc620b
    int32_t var_14c = x20; // value match: 0x7184ad4b
    int32_t var_158 = x6; // value match: 0xda87dfc0
    int32_t var_154 = x7; // value match: 0x4ad9cd8
    int32_t var_160 = x4; // value match: 0x9c4244a2
    int32_t var_15c = x5; // value match: 0x14279e1a
    int32_t var_168 = x8; // value match: 0x1925336d
    int32_t var_130 = var_11c; // value match: 0x41286005
    int32_t var_12c = var_120; // value match: 0x2e1f1e12 
    int32_t var_138 = var_114; // value match: 0x701e4655
    int32_t var_134 = var_118; // value match: 0x854aa1c
    int32_t var_140 = var_10c; // value match: 0x214e1c27
    int32_t var_13c = var_110; // value match: 0xe73abef6
    int32_t var_148 = var_104; // value match: 0x39b13d18
    int32_t var_144 = var_108; // value match: 0xa9ae6a6d
    int32_t x8_2 = 0x12;
    int32_t var_16c = x8_2;

    int32_t var_e4, var_b4, var_e8, var_ec, 
            var_c4, var_b8, var_c8, var_bc,
            var_cc, var_dc, var_d8, var_f0,
            var_c0, var_d0, var_e0, var_d4;

    while (var_16c > 2) {

        var_16c = x8_2;

        int32_t x24_1 = ~var_15c; // value match
        int32_t x11_26 = (var_154 | var_158) + (var_154 & var_158); // value match
        int32_t x17_3 = var_16c ^ (int32_t)0xfffffffe; // value match: 0xffffffec
        int32_t x8_29 = var_164 - ~var_168; // value match: 0x4c548ce0
        int32_t x9_63 = var_144 - ~var_148; // value match: 0xe35fa786
        int32_t x13_29 = (var_134 ^ var_138) + ((var_134 & var_138) << 1); // value match: 0x7872f071
        int32_t x16_4 = var_16c << 1 | (int)0xfffffffc; // value match: 0xfffffffc
        // repeat case 1 if var_16c > 2
        x8_2 = x16_4 - x17_3;

        int32_t x16_7 = rotate_right((var_150 | x11_26) & ~(var_150 & x11_26), 0xd); // value match: 0xf49e3648
        int32_t x2_6 = rotate_right((x13_29 & ~var_130) | (var_130 & ~x13_29), 0xd); // value match: 0x83A1CAD4
        int32_t x14_5 = rotate_right(((x8_29 - 1) & ~(var_160)) | (var_160 & ~(x8_29 - 1)), 0xd); // value match: 0x43ee80b6
        int32_t x17_7 = rotate_right((var_140 | (x9_63 - 1)) & ~(var_140 & (x9_63 - 1)), 0xd); // value match: 0xdd16108d
        int32_t x21_4 = (x16_7 | var_14c) + (x16_7 & var_14c); // value match: 0x6622e393
        int32_t x18_3 = ((x2_6 | var_12c) << 1) - (x2_6 ^ var_12c); // value match: 0xb1c0e8e6
        int32_t x15_4 = ((x17_7 | var_13c) << 1) - (x17_7 ^ var_13c); // value match: 0xc450cf83
        int32_t x23_6 = rotate_right((var_154 & ~(x21_4)) | (x21_4 & ~(var_154)), 0x12); // value match: 0xdfd2d8a3
        int32_t x25_4 = rotate_right(((x14_5 - x24_1 - 1) | var_164) & ~((x14_5 - x24_1 - 1) & var_164), 0x12); // value match: 0x51e89ace
        int32_t x22_9 = rotate_right((x18_3 | var_134) & ~(x18_3 & var_134), 0x12); // value match: 0x10beae65
        int32_t x11_28 = (x23_6 | x11_26) + (x23_6 & x11_26); // value match: 0xbf08553b
        int32_t x26_4 = rotate_right((var_144 & ~(x15_4)) | (x15_4 & ~(var_144)), 0x12); // value match: 0xa97b9b7f
        int32_t x3_6 = (x25_4 | (x8_29 - 1)) + (x25_4 & (x8_29 - 1)); // value match: 0x9e3d27ad
        int32_t x13_31 = (x22_9 ^ x13_29) + ((x22_9 & x13_29) << 1); // value match: 0x89319ed6
        int32_t x9_66 = (x26_4 | (x9_63 - 1)) + (x26_4 & (x9_63 - 1)); // value match: 0x8cdb4304
        int32_t x16_10 = rotate_right((x16_7 & ~(x11_28)) | (x11_28 & ~(x16_7)), 0x1d); // value match: 0x5cb31b9a
        int32_t x14_8 = rotate_right((x14_5 & ~(x3_6)) | (x3_6 & ~(x14_5)), 0x1d); // value match: 0xee9d38de
        int32_t x21_6 = (x16_10 ^ x21_4) + ((x16_10 & x21_4) << 1); // value match: 0xc2d5ff2d
        int32_t x17_10 = rotate_right((x17_7 & ~(x9_66)) | (x9_66 & ~(x17_7)), 0x1d); // value match: 0x8e6a9c4a
        int32_t x2_9 = rotate_right((x13_31 | x2_6) & ~(x13_31 & x2_6), 0x1d); // value match: 0x5482a010
        int32_t x14_10 = (x11_28 ^ x14_8) + ((x11_28 & x14_8) << 1); // value match: 0xada58e19
        int32_t x3_8 = (x21_6 | x3_6) + (x21_6 & x3_6); // value match: 0x611326da
        int32_t x15_6 = ((x17_10 | x15_4) << 1) - (x17_10 ^ x15_4); // value match: 0x52bb6bcd
        int32_t x23_9 = rotate_right((x23_6 & ~(x21_6)) | (x21_6 & ~(x23_6)), 0x16); // value match: 0x1c9e3874
        int32_t x24_8 = ((x16_10 | (x14_8 - ~(x14_5 - x24_1 - 1) - 1)) << 1) - (x16_10 ^ (x14_8 - ~(x14_5 - x24_1 - 1) - 1)); // value match: 0xa3667348
        int32_t x22_12 = rotate_right((x22_9 & ~(x2_9 - ~(x18_3)-1)) | ((x2_9 - ~(x18_3)-1) & ~(x22_9)), 0x16); // value match: 0xf49a4c5b
        int32_t x13_34 = rotate_right((x14_10 & ~(x13_31)) | (x13_31 & ~(x14_10)), 0xd); // value match: 0x867924a0
        int32_t x25_9 = x23_9 - (0xffffffff ^ rotate_right(((x14_8 - ~(x14_5 - x24_1 - 1) - 1) | x25_4) & ~((x14_8 - ~(x14_5 - x24_1 - 1) - 1) & x25_4), 0x16)) - 1; // value match: 0x8bd3b8d1
        int32_t x18_9 = rotate_right((x24_8 & ~(x2_9 - ~(x18_3)-1)) | ((x2_9 - ~(x18_3)-1) & ~(x24_8)), 0xd); // value match: 0xddf5292f
        int32_t x15_8 = (x13_34 ^ x15_6) + ((x13_34 & x15_6) << 1); // value match: 0xd934906d 
        int32_t x22_15 = rotate_right((x22_12 | x3_8) & ~(x22_12 & x3_8), 0xd); // value match: 0x540cac4b
        int32_t x17_12 = (x18_9 ^ x17_10) + ((x18_9 & x17_10) << 1); // value match: 0x6c5fc579
        int32_t x2_12 = rotate_right((x2_9 | x25_9) & ~(x2_9 & x25_9), 0xd); // value match: 0xc60efa88
        int32_t x11_31 = rotate_right((x11_28 & ~(x15_8)) | (x15_8 & ~(x11_28)), 0x12); // value match: 0x3155998f
        int32_t x17_14 = (x21_6 & ~(x22_15 - (0xffffffff ^ rotate_right((x15_6 | x26_4) & ~(x15_6 & x26_4), 0x16)) - 1)) | ((x22_15 - (0xffffffff ^ rotate_right((x15_6 | x26_4) & ~(x15_6 & x26_4), 0x16)) - 1) & ~(x21_6)); // value match: 0x951a8717
        int32_t x9_68 = (x2_12 | x9_66) + (x2_12 & x9_66); // value match: 0x52ea3d8c
        int32_t x16_13 = rotate_right((x16_10 & ~(x17_12)) | (x17_12 & ~(x16_10)), 0x12); // value match: 0x37b8cc3b
        int32_t x17_15 = rotate_right(x17_14, 0x12); // value match: 0xa1c5e546
        var_e4 = x11_31 - (~x14_10)-1;
        var_160 = x11_31 - (~x14_10)-1; // value match: 0xdefb27a8
        int32_t x3_10 = (x17_15 | x3_8) + (x17_15 & x3_8); // value match: 0x2d90c20
        int32_t x21_10 = rotate_right((x9_68 | x23_9) & ~(x9_68 & x23_9), 0x12); // value match: 0x17e139d
        int32_t x13_37 = rotate_right(((x11_31 - ~x14_10 -1) | x13_34) & ~((x11_31 - ~(x14_10)-1) & x13_34), 0x1d); // value match: 0xc4101842
        var_b4 = x16_13 - ~(x24_8)-1; // value match: 0xdb1f3f83
        var_e8 = x13_37;
        var_138 = x13_37;
        int32_t x18_11 = (x21_10 | x25_9) + (x21_10 & x25_9); // value match: 0x8d51cc6e
        int32_t x15_10 = (x13_37 ^ x15_8) + ((x13_37 & x15_8) << 1); // value match: 0x9d44a8af
        int32_t x13_39 = rotate_right((x18_9 & ~(x16_13 - ~(x24_8)-1)) | ((x16_13 - ~(x24_8)-1) & ~(x18_9)), 0x1d); // value match: 0x3750b560
        int32_t x14_18 = rotate_right((x22_15 & ~(x3_10)) | (x3_10 & ~(x22_15)), 0x1d); // value match: 0xb6ad035a
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
        int32_t x14_19 = (x14_18 | (x22_15 - (0xffffffff ^ rotate_right((x15_6 | x26_4) & ~(x15_6 & x26_4), 0x16)) - 1)) + (x14_18 & (x22_15 - (0xffffffff ^ rotate_right((x15_6 | x26_4) & ~(x15_6 & x26_4), 0x16)) - 1)); // value match: 0xe7c7b94
        int32_t x15_12 = rotate_right((x2_12 & ~(x18_11)) | (x18_11 & ~(x2_12)), 0x1d); // value match: 0x5af9b732
        var_bc = x13_39 - ~(x17_12) - 1; // value match: 0xa3b07ad9
        var_144 = x14_19;
        var_140 = x13_39 - ~(x17_12) - 1;
        int32_t x9_70 = (x15_12 | x9_68) + (x15_12 & x9_68); // value match: 0xade3f4be
        int32_t x11_34 = rotate_right((x15_10 | x11_31) & ~(x15_10 & x11_31), 0x16); // value match: 0x44c482b0
        var_cc = x14_19;
        var_130 = x15_12;
        int32_t x13_42 = rotate_right((x17_15 & ~(x14_19)) | (x14_19 & ~(x17_15)), 0x16); // value match: 0xe67b4abe
        var_dc = x9_70;
        var_d8 = x15_12;
        var_f0 = x11_34;
        var_15c = var_b4;
        var_158 = x11_34;
        var_14c = x13_42;
        var_148 = x9_70;
        int32_t x11_36 = rotate_right(((x13_39 - ~(x17_12) - 1) | x16_13) & ~((x13_39 - ~(x17_12) - 1) & x16_13), 0x16); // value match: 0x22db8a50
        int32_t x9_72 = rotate_right((x9_70 | x21_10) & ~(x9_70 & x21_10), 0x16); // value match: 0x779c8eb2
        int32_t var_f4_1 = x8_2; // value match: 0x10
        var_c0 = x11_36;
        var_d0 = x13_42;
        var_e0 = x9_72;
        var_154 = x9_72;
        var_150 = x11_36;
    }

    int32_t x8_20 = (x8_1 | var_d4) + (x8_1 & var_d4);
    memcpy(buffer, &x8_20, 4);
    int32_t x9_15 = (x8 ^ var_c4) + ((x8 & var_c4) << 1);
    memcpy(buffer+4, &x9_15, 4);
    int32_t x9_16 = (x4 | var_e4) + (x4 & var_e4);
    memcpy(buffer+8, &x9_16, 4);
    int32_t x9_19 = (x5 | var_b4) + (x5 & var_b4);
    memcpy(buffer+0xc, &x9_19, 4);
    int32_t x9_22 = (x20 ^ var_d0) + ((x20 & var_d0) << 1);
    memcpy(buffer+0x10, &x9_22, 4);
    int32_t x9_25 = ((x19 | var_c0) << 1) - (x19 ^ var_c0);
    memcpy(buffer+0x14, &x9_25, 4);
    int32_t x9_28 = (x7 | var_e0) + (x7 & var_e0);
    memcpy(buffer+0x18, &x9_28, 4);
    int32_t x9_31 = (x6 ^ var_f0) + ((x6 & var_f0) << 1);
    memcpy(buffer+0x1c, &x9_31, 4);
    int32_t x9_34 = ((var_108 | var_cc) << 1) - (var_108 ^ var_cc);
    memcpy(buffer+0x20, &x9_34, 4);
    int32_t x9_37 = ((var_104 | var_dc) << 1) - (var_104 ^ var_dc);
    memcpy(buffer+0x24, &x9_37, 4);
    int32_t x9_40 = (var_110 | var_ec) + (var_110 & var_ec);
    memcpy(buffer+0x28, &x9_40, 4);
    int32_t x9_43 = (var_10c | var_bc) + (var_10c & var_bc);
    memcpy(buffer+0x2c, &x9_43, 4);
    int32_t x9_44 = var_114 - ~var_e8 - 1;
    memcpy(buffer+0x30, &x9_44, 4);
    int32_t x9_49 = (var_11c | var_d8) + (var_11c & var_d8);
    memcpy(buffer+0x34, &x9_49, 4);
    int32_t x9_50 = var_120 - ~var_b8 - 1;
    memcpy(buffer+0x38, &x9_50, 4);
    int32_t x9_55 = ((var_118 | var_c8) << 1) - (var_118 ^ var_c8);
    memcpy(buffer+0x3c, &x9_55, 4);
}

void shift_seed(char* seed_buff, char* header, int32_t length, int32_t header_length, char* out_buff) {
    int index = 0;

    while (index < header_length) {
        unsigned char w11 = *(seed_buff + index);
        unsigned char w12 = *(header + index);

        *(out_buff + index) = (w11 & ~w12) | (w12 & ~w11);
        index++;
    }

    while (index < length) {
        *(out_buff + index) = *(seed_buff + index);
        index++;
    }
}

void encode_bytes(char* seed, char* string, char* buffer, int32_t length) {

    unsigned char xor_buffer[64];
    unsigned char weird_func_buff[64];
    other_weird_func(xor_buffer, seed);

    int32_t var_1c8, var_1c0, var_188, var_190, var_168, var_140, var_1b0, var_178, 
            var_118, var_194, var_150, var_148, var_149, var_1a0, var_100, var_158;
    unsigned char var_1b4, var_11c, var_17c, var_104, var_16c, var_1a4, var_159;
    unsigned char *var_128, *var_110;

    int switchCase = 0xb;
    int canContinue = 1;
    while(canContinue) {
        
        switch(switchCase) {

            case 0:;
            switchCase = 0xa;
            var_190 = length;
            var_188 = 0;
            continue;

            case 1:;
            var_1a0 = var_168;
            int32_t x9_19 = var_168 ^ var_140;
            int32_t x10_9 = (var_168 | var_140) << 1;
            int32_t x9_20 = x10_9 - x9_19;
            var_100 = x9_20;
            uint32_t x8_35 = *(weird_func_buff+var_168);
            uint32_t x9_21 = *(string + x9_20);
            switchCase = x10_9 == x9_19 ? 3 : 2;
            unsigned char x8_37 = (x9_21 & (~(x8_35))) | (x8_35 & (~(x9_21)));
            var_104 = x8_37;
            var_16c = x8_37;
            continue;

            case 2:;
            uint32_t x9_15 = var_104; 
            uint32_t x8_26 = (*(string + ((-0x100000000 + ((long long)var_100 << 0x20)) >> 0x20)));
            switchCase = 3;
            unsigned char x8_28 = (x8_26 | x9_15) & (~(x8_26 & x9_15));
            var_16c = x8_28;
            continue;

            case 3:;
            switchCase = 0x11;
            var_1a4 = var_16c;
            var_110 = buffer + var_100;
            continue;

            case 4:;
            var_1b0 = var_178;
            int64_t x10_4 = var_178 | var_1c8;
            int64_t x9_11 = var_178 & var_1c8;
            int64_t x9_12 = x10_4 + x9_11;
            var_118 = x9_12;
            if(x10_4 == (x9_11 * -1))
                switchCase = 6;
            else
                switchCase = 5;

            int32_t x8_19 = *(weird_func_buff+var_178);
            uint32_t x9_13 = *(string+x9_12);

            unsigned char x8_21 = (x9_13 & (~(x8_19))) | (x8_19 & ((~x9_13)));
            var_11c = x8_21;
            var_17c = x8_21;
            continue;

            case 5:;
            uint32_t x9_23 = var_11c;
            uint32_t x8_42 = *(string+var_118-1);
            switchCase = 6;
            unsigned char x8_44 = (x8_42 | x9_23) & ~(x8_42 & x9_23);
            var_17c = x8_44;
            continue;

            case 6:;
            switchCase = 0xf;
            var_1b4 = var_17c;
            var_128 = buffer + var_118;
            continue;

            case 7:;
            int64_t x8_8 = (var_1c0 ^ -0x40) + ((var_1c0 & 0x7fffffffffffffc0) << 1);
            int32_t temp;
            memcpy(&temp, xor_buffer+36, 4);
            temp += 0x3a;
            memcpy(xor_buffer+36, &temp, 4);
            var_190 = x8_8;
            var_188 = var_1c8 + 0x40;
            switchCase = x8_8 == 0 ? 8 : 0xa;
            continue;

            case 8:;
            canContinue = 0;
            break;

            case 9:;
            switchCase = 1;
            var_168 = 0;
            var_140 = (var_1c8 ^ -0xffffffc1) & var_1c8;
            continue;

            case 0xa:;
            var_1c8 = var_188;
            var_1c0 = var_190;
            weird_func(xor_buffer, weird_func_buff);
            switchCase = 4;
            if(var_1c0 < (unsigned int)0x41)
                switchCase = 9;
            var_178 = 0;
            continue;  

            case 0xb:;
            switchCase = 0;
            continue;

            case 0xc:;
            *var_128 = var_1b4;
            switchCase = 0xf;
            continue;

            case 0xd:;
            switchCase = var_149 != 0 ? 7 : 4;
            var_178 = var_148;
            continue;

            case 0xe:;
            *var_110 = var_1a4;
            switchCase = 0x11;
            continue;

            case 0xf:;
            *var_128 = var_1b4;
            var_194 = 1;
            var_150 = 0x2f1; // data_196c04
            int32_t x8_54 = (var_1b0 << 1 | 2) - (var_1b0 ^ 1);
            int32_t x9_30 = 0x168; // data_196be8
            var_148 = x8_54; 
            var_149 = x8_54 == 0x40; // 64
            switchCase = x9_30 >= 4 ? 0x13 : 0x12;
            continue;
            
            case 0x10:;
            switchCase = var_159 != 0 ? 8 : 1;
            var_168 = var_158;
            continue;          

            case 0x11:;
            *var_110 = var_1a4;
            int32_t x10_13 = 0x168; // data_196be8
            int32_t x11_1 = -0x2b5ea483; // data_196bf8
            var_158 = var_1a0 + 1;
            int32_t x8_62 = x10_13 * -1;
            int32_t x9_34 = x10_13 * x10_13 * x10_13;
            int32_t x10_14 = x9_34 ^ x8_62;
            int32_t x8_63 = x9_34 & x8_62;
            var_159 = var_1a0 + 1 == var_1c0;
            int32_t x8_64 = x10_14 + (x8_63 << 1);
            long long x9_36 = (long long)((long long)x8_64 * 0x55555556);
            uint32_t x9_38 = (x9_36 >> 0x20) + (x9_36 >> 0x3f);
            int32_t x10_16 = 0x2f1; // data_196c04

            int32_t x8_65 = (x8_64 == (x9_38 + (x9_38 << 1)));
            int32_t x9_40 = x10_16 < 0x5c;

            switchCase = (((x9_40 & x8_65) | (x9_40 ^ x8_65)) == 0xd4a15b7c - ~((x11_1 * -1))) ? 0xe : 0x10;
            continue;

            case 0x12:;
            switchCase = var_194 != 0 ? 0xd : 0xc;
            continue;

            case 0x13:;
            switchCase = 0x12;
            int32_t x8_2 = ((var_150 | 1) + (var_150 & 1)) * var_150;
            int32_t x8_3 = (x8_2 ^ 0xfffffffe) & x8_2;
            int32_t x8_5 = (x8_3 | 1) & (~x8_3 | 0xfffffffe);
            var_194 = x8_5;
            continue;

        }
    }
}

void encode_string(char* seed, char* string, int32_t length, char* header, int32_t header_length, char* buffer) {
    char shifted_seed[32];
    shift_seed(seed, header, 32, header_length, shifted_seed);

    encode_bytes(shifted_seed, string, buffer, length);
}