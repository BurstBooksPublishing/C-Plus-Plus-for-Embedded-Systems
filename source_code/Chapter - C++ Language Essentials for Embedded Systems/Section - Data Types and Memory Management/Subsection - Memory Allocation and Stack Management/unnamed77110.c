#include
#include
char* create\_greeting(const char* name) {
char* buf = malloc(strlen(name));
strcpy(buf, "Hello, ");
strcat(buf, name);
return buf;
}