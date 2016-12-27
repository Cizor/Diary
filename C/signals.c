#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <signal.h>

void sigHandle(int sig){
	printf("Thanks\n");
}
main(){
	int number = 0;
	struct sigaction s;
	s.sa_handler = sigHandle;
	s.sa_flags = SA_RESTART;
	sigemptyset(&s.sa_mask);

	if(sigaction(SIGINT, &s, NULL) == -1){
		perror("sigaction");
		exit(1);
	}
	printf("Enter number: ");
	scanf("%d",&number);

	return 0;
}
