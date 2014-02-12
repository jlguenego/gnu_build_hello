#include <stdio.h>

#include "main.h"
#include "foobarmodule/foobar.h"

int main() {
	printf("Start Main...\n");
	struct Point p;
	p.x = 1;
	p.y = 2;
	printf("Point p=(%d, %d)\n", p.x, p.y);
	sayFooBar();
	unsigned char hash[20];
	sha1(hash, "1");

	for (int i = 0; i < 20; i++) {
		printf("%02x", hash[i]);
	}
	printf("\n");
	return 0;
}
