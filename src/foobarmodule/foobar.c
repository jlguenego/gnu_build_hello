#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>

void sayFooBar() {
	printf("I say FooBar...\n");
}

void sha1(unsigned char* obuf, unsigned char* ibuf) {
    SHA1(ibuf, strlen(ibuf), (unsigned char*) obuf);
}
