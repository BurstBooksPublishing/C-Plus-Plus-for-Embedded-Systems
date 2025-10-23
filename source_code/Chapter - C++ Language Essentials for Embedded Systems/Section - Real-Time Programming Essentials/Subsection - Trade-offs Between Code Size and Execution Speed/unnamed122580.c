// Version 1: Conditional checks
int hexToDec1(char c) {
if (c >= '0' && c <= '9') return c - '0';
if (c >= 'A' && c <= 'F') return 10 + c - 'A';
if (c >= 'a' && c <= 'f') return 10 + c - 'a';
return -1;
}
// Version 2: Lookup table
int hexToDec2(char c) {
const int table[256] = {/* populated lookup table */};
return table[(unsigned char)c];
}