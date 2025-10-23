void process_data(int size) {
char* buffer1 = malloc(size * sizeof(char));
int* buffer2 = malloc(size * sizeof(int));
free(buffer1);
char* buffer3 = malloc(size * sizeof(char));
// ... more operations ...
}