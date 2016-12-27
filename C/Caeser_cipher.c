/*******************************************************
  Convert all words with Caesar cipher 
  User by Julius Caesar
  Substitution counter is 3
 ********************************************************/

 /**********************************ONLY ENCRYPTION****************************************/

#include <stdio.h>
#define CAESAR_COUNTER 3

/*************DYNAMIC CHARACTER FETCHING FROM USER INPUT***********/
char *getln()
{
	char *line = NULL, *tmp = NULL;
	size_t size = 0, index = 0;
	int ch = EOF;

	while (ch) {
		ch = getc(stdin);

		/* Check if we need to stop. */
		if (ch == EOF || ch == '\n')
			ch = 0;

		/* Check if we need to expand. */
		if (size <= index) {
			size ++;
			tmp = realloc(line, size);
			if (!tmp) {
				free(line);
				line = NULL;
				break;
			}
			line = tmp;
		}

		/* Actually store the thing. */
		line[index++] = ch;
	}

	return line;
}
void main(){
	char *a;
	int counter = 0;
	printf("This is Caesar cipher conversion\n");
	printf("Enter your word : \n");
	a = getln();
	/*******************ENCRYPTING*****************/
	while(counter < strlen(a) ){
		if(a[counter] == ' '){
			printf("%c",a[counter]);
		}else{
			printf("%c",a[counter]+CAESAR_COUNTER);
		}
		counter++;
	}
	printf("\n");
	/********************DECRYPTING*****************/

}


