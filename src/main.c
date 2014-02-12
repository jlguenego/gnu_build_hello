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
	return 0;
}
