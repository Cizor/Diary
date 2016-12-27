#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <crypt.h>
#include <sys/time.h>

int main(void)
{
	char salt[] = "$1$........";
	const char *const seedchars =
		"./0123456789ABCDEFGHIJKLMNOPQRST"
		"UVWXYZabcdefghijklmnopqrstuvwxyz";
	char *password;
	int i,j;
	time_t ticks;
	struct timeval te; 
	gettimeofday(&te, NULL); // get current time
	long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000; // caculate milliseconds
	srand((unsigned)milliseconds);
	for (i = 0; i < 8; i++)
		salt[3+i] = seedchars[rand() % 0x3f];
	password = crypt(getpass("Password:"), salt);

	/* Print the results. */
	puts(salt);
	puts(password);
	return 0;
}

