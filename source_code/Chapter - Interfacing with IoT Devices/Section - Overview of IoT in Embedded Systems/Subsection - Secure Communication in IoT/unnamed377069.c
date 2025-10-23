// DTLS record header format
typedef struct {
uint8_t type;
uint16_t version;
uint16_t epoch;
uint64_t seq_num;
uint16_t length;
} dtls_record_header;