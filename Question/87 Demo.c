#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int bin_to_dec(char* s) {
    int x = 0;
    if (s[0] == '1') {
        x = x + 32;
    }
    if (s[1] == '1') {
        x = x + 16;
    }
    if (s[2] == '1') {
        x = x + 8;
    }
    // TODO
    // ....
    if (s[5] == '1') {
        x = x + 1;
    }
    return x;
}

// TODO
char* dec_to_bin(int x) {
    // 以 \0 结尾，例如 '0110 \0'
}

// TODO
char find(int x) {
    
}

int main() {

    // input
    char input[101];
    scanf("%s", input); // "man"
    
    char* total;
    
    int len = strlen(input); // 3
    for (i = 0; i < len; i++) {
        char* s = dec_to_bin((int)input[i]);
        // 'm' -> 77 -> 01001101, 'a' -> 01100001, 'n' -> 01101110
        strcat(total, s);
    }
    
    // 010011010110000101101110 \0
    len = strlen(total);
    int count = 0;
    for (i = 0; i < len; i=i+6) {
        for (offset = 0; offset < 6; offset++) {
            if (i + offset > len) {
                output[offset] = '0'; // 补 0
            } else {
                output[offset] = total[i + offset];
            }
        }
        // 010011
        int val = bin_to_dec(output); // 19
        char c = find(val); // find(19) -> 'T'
        // output
        printf("%c", c);
        count++;
    }

    while (count % 4 != 0) {
        printf("="); // 补 =
        count++;
    }
    return 0;
}
