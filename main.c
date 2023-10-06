#include <stdio.h>
#include <stdlib.h>

void err(char* msg) {
	fprintf(stderr, "Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc != 1 + 1) {
		err("Wrong number of arguments");

		return 1;
	}

	int n = atoi(argv[1]);

	if (n == 0) {
		err("Value zero or non-numeric argument");

		return 1;
	}

	if (n < 0) {
		err("Value negative");

		return 1;
	}

	printf("%dx", n);

	return 0;
}
