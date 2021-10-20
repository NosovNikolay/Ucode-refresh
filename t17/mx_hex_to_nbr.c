#include <stdlib.h>
#include <stdbool.h>
static bool mx_isdigit(int c) {

    if (c >= '0' && c <= '9') {
        return true;
    }
    return false;
}

static bool mx_islower(int c) {

    if (c >= 'a' && c <= 'z') {
        return true;
    }
    return false;
}

static bool mx_isupper(int c) {

    if (c >= 'A' && c <= 'Z') {
        return true;
    }
    return false;
}

static int mx_strlen(const char *s) {
    char i = ' ';
    int counter = 0;
    while (i != '\0'){
        i = s[counter];
        counter++;
    }
    return counter - 1;
}


unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long decimal = 0;
    unsigned long base = 1;

    int len = mx_strlen(hex);

    for (int i = len - 1; i >= 0; i--) {
        if (mx_isdigit(hex[i])) {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }   
        else if (mx_isupper(hex[i])) {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if (mx_islower(hex[i])) {
            decimal += (hex[i] - 87) * base;
            base *= 16; 
        }
        else {
            return 0;
        }
    }
    return decimal;
}


