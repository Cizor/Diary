#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int arr[2];
	if(pipe(arr) == -1){
		perror("pipe");
		exit(1);
	}
	if(!fork()){
		close(1);
		dup(arr[1]);
		close(arr[0]);
		execlp("ls","ls",NULL);
	}else{
		close(0);
		dup(arr[0]);
		close(arr[1]);
		execlp("wc","wc","-l",NULL);
	}

	return 0;
}
