#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

int main(){

	int arr[2];
	char buf[30];

	if(pipe(arr) == -1){
		perror("pipe");
		exit(1);
	}
	printf("Writing to file with descriptor : %d\n",arr[1]);
	write(arr[1],"I am Amrit",11);
	printf("Lets read from file with descriptor %d\n",arr[0]);
	read(arr[0], buf, 11);
	printf("Read buf: %s", buf);

	return 0;
}
