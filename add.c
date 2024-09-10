#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint16_t add(uint16_t a, uint16_t b) {
	return a + b;
}

int main(int argc, char* argv[]) {
	uint16_t result = 0;
	if (argc == 3) {
		result = add(atoi(argv[1]), atoi(argv[2]));
		printf("sum: %d\n", result);
	} 
	else {
		puts("please put 2 positive integers.");
		return -1;
	}

	return result;
}
