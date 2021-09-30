#include <stdint.h>
#include <string.h>

void other_weird_func(char *buffer, char *seed);
void shift_seed(void *seed_buff, char *header_prefix, int32_t length, int32_t shifted_bytes_count, void *out_buff);