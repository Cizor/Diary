#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	FILE *fp;
	char searchStr[100],ch;
	int i,len,occur=0;
	fp = fopen("/home/amrit/SourceCodes/test/find_word/File.txt","r");
	if(fp == NULL){
		printf("\nFile doesnt Exist");
		exit(0);
	}
	printf("\nEnter the string to be searched in the file : ");
	gets(searchStr);
	len = strlen(searchStr);

	if( fgets (searchStr, 60, fp)!=NULL ) 
	{
		/* writing content to stdout */
		printf("Found\n");
	}else{
		printf("Not Found\n");
	}

#if 0
	while(!feof(fp)){
		for(i=0; i<len; i++){
			ch = fgetc(fp);
			printf("%c\n",ch);
			if(ch != searchStr[i])
				break;
		}
		printf("Position :%ld\n",ftell(fp));	
		if(i==len){
			break;
		}
	}
#endif	
}
