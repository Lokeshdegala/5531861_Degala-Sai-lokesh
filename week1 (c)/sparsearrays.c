#include <stdio.h>
#include <string.h>

#define MAX 1000

int main() {
    int n, q;
    char strings[1000][MAX];
    char query[MAX];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%s", query);
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (strcmp(strings[j], query) == 0) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
