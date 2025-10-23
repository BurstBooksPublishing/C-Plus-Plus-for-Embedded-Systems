// Function A: Compact loop
int sumA(int arr[16]) {
int total = 0;
for (int i = 0; i < 16; i++) {
total += arr[i];
}
return total;
}
// Function B: Unrolled loop
int sumB(int arr[16]) {
return arr[0] + arr[1] + arr[2] + arr[3] +
arr[4] + arr[5] + arr[6] + arr[7] +
arr[8] + arr[9] + arr[10] + arr[11] +
arr[12] + arr[13] + arr[14] + arr[15];
}