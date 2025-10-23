// Example skeleton
#include
pthread_mutex_t lock;
int counter = 0;
void* increment(void* arg) {
for (int i = 0; i < 1000; i++) {
pthread_mutex_lock(&lock);
counter++;
pthread_mutex_unlock(&lock);
}
return NULL;
}