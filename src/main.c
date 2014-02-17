#include <stdio.h>
#include <ltdl.h>
//#include <dlfcn.h>

#include "main.h"
#include "foobarmodule/foobar.h"

typedef void (*say_hello)(void);

int test_dlopen(char *filename, char *symbol) {
	int result = 0;
	void* lib = NULL;

	int r = 0;
	if ((r = lt_dlinit()) > 0) {
		printf("Cannot init ltdl. Error=%s\n", lt_dlerror());
		result = 1;
		goto cleanup;
	}

	lib = lt_dlopen(filename);
	//lib = dlopen(filename, RTLD_NOW);
	if (!lib) {
		printf("Cannot load the library. Error=%s\n", lt_dlerror());
		result = 1;
		goto cleanup;
	}

	say_hello df = lt_dlsym(lib, symbol);
	//say_hello df = dlsym(lib, symbol);
	if (!df) {
		printf("ERROR: Invalid library.Error=%s\n", lt_dlerror());
		result = 1;
		goto cleanup;
	}
	df();

cleanup:
	if (lib) {
		lt_dlclose(lib);
		//dlclose(lib);
	}
	if (r == 0) {
		lt_dlexit();
	}
	return result;
}

int main(int argc, char* argv[]) {
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

	//load a plugin and call its 'say_hello' function.
	if (argc < 2) {
		printf("need 2 args.");
	} else {
		test_dlopen(argv[1], "say_hello");
	}

	return 0;
}
