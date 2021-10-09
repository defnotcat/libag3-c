#include <stdint.h>
#include <string.h>

__declspec(dllexport) void encode_string(char* seed, char* string, int32_t length, char* header, int32_t header_length, char* buffer);
void shift_seed(char *seed_buff, char *header, int32_t length, int32_t header_length, char *out_buff);
void encode_bytes(char *seed, char *string, char *buffer, int32_t length);
void generate_output_data(char* seed, char *buffer);
void generate_input_data(char *buffer, char *seed);