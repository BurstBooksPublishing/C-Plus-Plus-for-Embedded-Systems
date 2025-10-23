pthread_mutex_t A, B;
void* T1(void* arg) {
pthread_mutex_lock(&A);
pthread_mutex_lock(&B);
// Critical section
pthread_mutex_unlock(&B);
pthread_mutex_unlock(&A);
}
void* T2(void* arg) {
pthread_mutex_lock(&B);
pthread_mutex_lock(&A);
// Critical section
pthread_mutex_unlock(&A);
pthread_mutex_unlock(&B);
}