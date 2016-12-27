#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {

	pid_t pid;
	int rv;
	pid = fork();
	printf("\nPid %d\n",pid);
	switch(pid){
		case -1:
			perror("fork");
			exit(1);
		case 0:
			printf("This is child process with pid :%d", getpid());
			printf("Whose parent pid is :%d", getppid());
			printf("Enter exit status code :");
			scanf("%d", &rv);
			printf("\nBye\n");
			exit(rv);

		default:
			printf("PARENT: This is parent with pid %d\n",getpid());
			wait(&rv);
			printf("Child status is %d\n", WEXITSTATUS(rv));
			printf("PARENT Bye\n");
	}
}

