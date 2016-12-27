#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void FindWord(char *word , char *file){
	char line[1024] ;
	FILE* fp = fopen(file, "r") ;
	while (fgets(line , sizeof(line) , fp )!= NULL)
	{
		if (strstr(line , word )!= NULL)
		{
			printf("%s",line);
		}
	}
	if(line != NULL){
			printf("Not found\n");
	}
}

void main(){
	FindWord("Amrit","Credentials.txt");
}
