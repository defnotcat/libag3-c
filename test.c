#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "libag3.h"

// https://gist.github.com/xsleonard/7341172
unsigned char* hexstr_to_char(const char* hexstr)
{
    size_t len = strlen(hexstr);
    size_t final_len = len / 2;
    unsigned char* chrs = (unsigned char*)malloc((final_len+1) * sizeof(*chrs));
    for (size_t i=0, j=0; j<final_len; i+=2, j++)
        chrs[j] = (hexstr[i] % 32 + 9) % 25 * 16 + (hexstr[i+1] % 32 + 9) % 25;
    chrs[final_len] = '\0';
    return chrs;
}

char *buff_to_hex(unsigned char *buffer, int len) {
    char *output = malloc((len*2)+1);
    char *ptr = &output[0];

    int i;
    for(i = 0; i < len; i++)
        ptr += sprintf(ptr, "%02x", buffer[i]);
    
    return output;
}

// https://stackoverflow.com/questions/10599068/how-do-i-print-bytes-as-hexadecimal
static void print_buf(const char *title, const unsigned char *buf, size_t buf_len)
{
    size_t i = 0;
    fprintf(stdout, "%s\n", title);
    for(i = 0; i < buf_len; ++i)
    fprintf(stdout, "%02X%s", buf[i],
             ( i + 1 ) % 16 == 0 ? "\r\n" : " " );
}

bool test_other_weird_func(char *expected) {
    char *buffer = malloc(64);
    char *seed = hexstr_to_char("ac5818161edec3cb26a6f00d65ab3aa6f0f9ed3c0426a2bd4d5114f11aedb973");
    other_weird_func(buffer, seed);
    printf("other_weird_func: %s", buff_to_hex(buffer, 64));
    return !strcmp(expected, buff_to_hex(buffer, 64));
}

struct Test {
    char *expected;
    char *original;
    char *prefix;
    int length;
    int prefix_length;
} typedef TestStruct;

bool perform_test(TestStruct test) {
    char *output = malloc(32);
    shift_seed(hexstr_to_char(test.original), test.prefix, test.length, test.prefix_length, output);
    char *hex = buff_to_hex(output, 32);
    bool is_pass = !strcmp(test.expected, hex);
    printf("\n[%s] seed=%s, header_prefix=%s, length=%d, prefix_length=%d, output=%s, expected=%s", is_pass ? "PASS" : "FAIL", test.original, test.prefix, test.length, test.prefix_length, hex, test.expected);
}

bool test_shift_seed() {
    char original_seed[65] = "125818161edec3cb26a6f00d65ab3aa6f0f9ed3c0426a2bd4d5114f11aedb973";
    char header_prefix[12] = "X-ScT9D0Me-";
    char *seed_buffer = hexstr_to_char(original_seed);
    char *output_buffer = malloc(32);
    int length = 32; // 32
    int shift_bytes = 11; // 11
    shift_seed(seed_buffer, header_prefix, length, shift_bytes, output_buffer);
    print_buf("shift_seed", output_buffer, 32);
    return false;
}

int main(int ac, char** av) {

    if(ac < 2) {
        printf("./test <function> [..args]");
        return 0;
    }

    int32_t test;
    char *buff2 = hexstr_to_char("385dea1c");
    memcpy(&test, buff2, 4);
    printf("test=%d\n", test);


    // 72592f336d332519a244429c1a9e27144bad84710b62fc19d89cad04c0df87da6d6aaea9183db139f6be3ae7271c4e2155461e7005602841121e1f2e1caa5408
    char *buff = malloc(64);
    encode_string(hexstr_to_char("1380d71273250a113f3c02330b62fc19f6be3ae755461e70183db1396d332519"), "{\"nonce\": \"1633652373-WnSFiMq9LZeCY2w5WtaPITqAxZ20HhOu\", \"sig\": [\"samsung\\/a40eea\\/a40:10\\/QP1A.190711.020\\/A405FNXXU3BTC4:user\\/release-keys\", \"11827,1633354425,1633354425\", \"14529,1633354449,1633354449\", \"3480805\"]}", "X-ScT9D0Me-", buff, 217);
    print_buf("", buff, 64);
    //weird_func(hexstr_to_char("8283c5ef067a356fa244429c1a9e27149fb2ae629f6bf8bcd89cad04c0df87da6d6aaea9813061843a01dd8e49f68086878966f105602841121e1f2e1caa5408"), buff);
    //print_buf("", buff, 64);
    //printf("weird_func = %s", buff_to_hex(buff, 64));

    //printf("\ntest_other_weird_func: %s", (test_other_weird_func("26A6F00D1AEDB973A244429C1A9E2714AC58181665AB3AA6D89CAD04C0DF87DA6D6AAEA94D5114F1F0F9ED3C1EDEC3CB0426A2BD05602841121E1F2E1CAA5408") ? "pass" : "fail"));
    //printf("\ntest_shift_seed: %s", (test_shift_seed() ? "pass" : "fail"));

}