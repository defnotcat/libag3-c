#include <stdint.h>
#include <string.h>
#include <stdlib.h>

__declspec(dllexport) void shift_seed(char *seed_buff, char *header, int32_t length, int32_t header_length, char *out_buff);
__declspec(dllexport) void weird_func(char* seed, char *buffer);
__declspec(dllexport) void other_weird_func(char *buffer, char *seed);
__declspec(dllexport) void encode_bytes(char *seed, char *string, char *buffer, int32_t length);
__declspec(dllexport) void encode_string(char* seed, char* string, int32_t length, char* header, int32_t header_length, char* buffer);