#include <stdio.h>

int lonelyinteger(int a[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= a[i];  // XOR all numbers
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d\n", lonelyinteger(a, n));
    return 0;
}
