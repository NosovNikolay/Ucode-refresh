void mx_printchar(char c);
int mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char *s);

int main(int argc, char const *argv[]) {
	const char *tmp;

	if (argc < 2)
		return 0;
	for (int i = 1; i < argc; ++i) {
		for (int j = i; j < argc; ++j) {
			if (mx_strcmp(argv[i], argv[j]) > 0) {
				tmp = argv[j];
				argv[j] = argv[i];
				argv[i] = tmp;
			}
		}
	}
	for (int i = 1; i < argc; ++i) {
		mx_printstr(argv[i]);
		mx_printchar('\n');
	}
	return 0;
}
