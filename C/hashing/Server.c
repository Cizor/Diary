#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 
#include <openssl/sha.h> 

#if 0
#include "common.h"
bool simpleSHA256(void * salt, unsigned long salt_length, void* input, unsigned long length, unsigned char* md) 
{
	SHA256_CTX context;
	if(!SHA256_Init(&context))
		return false;

	// first apply salt
	if(!SHA256_Update(&context, (unsigned char*)salt, salt_length))
		return false;

	// continue with data...
	if(!SHA256_Update(&context, (unsigned char*)input, length))
		return false;

	if(!SHA256_Final(md, &context))
		return false;

	return true; 
}
#endif
int main()
{
	/***GENERATING SALT**********/
	char salt[2];  /* Salt for the crypt() function  */
	const char *salt_chars = "abcdefghijklmnopqrstuvwxyz" /* Range of character supported   */
							"ABCDEFGHIJKLMNOPQRSTUVWXYZ"  /* as a value for salt in crypt() */
							"0123456789";
	const char password[10], *buf;

	/* Build salt */
	srand(time(NULL));
	salt[0] = salt_chars[rand() % 62];
	salt[1] = salt_chars[rand() % 62];

	buf =crypt(password, salt);
	printf("%c\n",salt[0]);
	printf("%c\n",salt[1]);
	puts(buf);
	/*****SALT END*************/

}
