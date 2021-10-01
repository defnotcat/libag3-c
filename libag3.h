#include <stdint.h>
#include <string.h>

__declspec(dllexport) void other_weird_func(char *buffer, char *seed);
__declspec(dllexport) void weird_func(char* arg1, char *arg2);
__declspec(dllexport) void shift_seed(char *seed_buff, char *header_prefix, int32_t length, int32_t shifted_bytes_count, char *out_buff);