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

// https://stackoverflow.com/questions/10599068/how-do-i-print-bytes-as-hexadecimal
static void print_buf(const char *title, const unsigned char *buf, size_t buf_len)
{
    size_t i = 0;
    fprintf(stdout, "%s\n", title);
    for(i = 0; i < buf_len; ++i)
    fprintf(stdout, "%02X%s", buf[i],
             ( i + 1 ) % 16 == 0 ? "\r\n" : " " );
}

bool test_shift_seed() {
    char original_seed[65] = "b0f09e55af064c28b1ce2ac5f0e8c857ee8bf3c73fdf8c6b5d7c5bee6d72a8ee";
    char header_prefix[12] = "X-ScT9D0Me-";
    char *seed_buffer = hexstr_to_char(original_seed);
    char *output_buffer = malloc(32);
    int length = 0; // 32
    int shift_bytes = 1; // 11
    shift_seed(seed_buffer, header_prefix, length, shift_bytes, output_buffer);
    return false;
}

int main(int ac, char** av) {

    if(ac < 2) {
        printf("./test <function> [..args]");
        return 0;
    }

    printf("\ntest_shift_seed: %s", (test_shift_seed() ? "pass" : "fail"));

}