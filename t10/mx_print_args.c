#include <unistd.h>

void mx_printstr(const char *s);

int main(int argc, char const *argv[]) {
    if(argc < 1) {
        return 0;
    }
    for(int i = 1; i < argc ; ++i) {
        mx_printstr(argv[i]);
        write(1, "\n", 1);
    }
    return 0;
}
