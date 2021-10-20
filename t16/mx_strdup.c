#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    char *dup = NULL;
    if (str) {
        dup = mx_strnew(mx_strlen(str));
    }

    if (dup != NULL) {
        mx_strcpy(dup, str);
        return dup;
    }
    return NULL;
}



