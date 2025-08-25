#include <stdio.h>
#include <string.h>

void timeConversion(char s[]) {
    int hh, mm, ss;
    char period[3];

    // 1) Parse "hh:mm:ssAM" or "hh:mm:ssPM"
    sscanf(s, "%2d:%2d:%2d%2s", &hh, &mm, &ss, period);

    // 2) Convert hour based on AM/PM
    if (strcmp(period, "AM") == 0) {
        // Midnight case: 12 AM -> 00
        if (hh == 12) hh = 0;
    } else { // "PM"
        // Afternoon case: 1..11 PM -> add 12
        if (hh != 12) hh += 12;
    }

    // 3) Print in 24-hour format with zero padding
    printf("%02d:%02d:%02d\n", hh, mm, ss);
}

int main() {
    char s[11]; // Exactly fits "hh:mm:ssAM" (10 chars) + '\0'
    scanf("%s", s);  // reads the whole token (no spaces inside)

    timeConversion(s);
    return 0;
}
