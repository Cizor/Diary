#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h>

struct check{
	char *s;
};

int main(){
	struct check *c = NULL;
	int i = 0, count = 0;
	char line[100];
	c = (struct check *)malloc(20 * sizeof(struct check));
	for(i = 0;i < 20;i++){
		printf("Enter your Line \n");
		__fpurge(stdin);
		fgets(line,100,stdin);
		c[i].s = strdup(line);
		count++;
	}
	for(i = 0;i < count;i++){
		printf("Line : %s\n",c[i].s);
	}
	for(i = 0;i < count;i++){
		printf("\nlength %lu\n",strlen(c[i].s));
		free(c[i].s);
		printf("\nAfter free length %lu\n",strlen(c[i].s));
	}
	free(c);
	
}
