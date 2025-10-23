void* ptrs[100];
for (int i = 0; i < 100; i++) {
ptrs[i] = malloc(rand() % 128 + 1);
}
for (int i = 0; i < 100; i += 2) {
free(ptrs[i]);
}