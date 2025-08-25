#include <stdio.h>
#include <string.h>

char* strings_xor(char s[], char t[], char res[]) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == t[i])
            res[i] = '0';
        else
            res[i] = '1';
    }
    res[n] = '\0';
    return res;
}

int main() {
    char s[1001], t[1001], res[1001];
    scanf("%s", s);
    scanf("%s", t);
    printf("%s\n", strings_xor(s, t, res));
    return 0;
}
