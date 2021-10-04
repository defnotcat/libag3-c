#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void other_weird_func(char *buffer, char *seed);
void weird_func(char* seed, char *buffer);
void shift_seed(char *seed_buff, char *header_prefix, int32_t length, int32_t shifted_bytes_count, char *out_buff);
void encode_bytes(char *seed, char *string, char *buffer, int32_t length);
__declspec(dllexport) void encode_string(char *seed, char *string, char* header, char *buffer, int length);