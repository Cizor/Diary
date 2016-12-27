#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
struct lines{
	int f;//identifier of friend
	int p;//popularity
	char *s; //string
};

int main(){
	int n = 0, m = 0, i = 0,j = 0,record_count = 0,flag= 0,si_counter=0,special_records = 0,normal_records = 0;
	int *s_i = NULL;//identifiers of special friends

	char line[100];
	char identifier[10];

	char s[2] = " ";
	char *token;
	struct lines *records = NULL;
	struct lines *specials = NULL;
	struct lines *normals = NULL;
	struct lines temp;
	memset(line, 0, sizeof(line));

	printf("\nChef Watson's algorithm\n");
	//Getting number of special friends
	printf("Number of special friends: ");
	fgets(line, 100, stdin);
	n = atoi(line);
	s_i = (int *)malloc(n * sizeof(int));

	//Fetching special friends identifiers
	for(i = 0;i < n;i++){
		__fpurge(stdin); //flush standard input
		printf("Enter %dth special friend identifier",i);
		fgets(identifier, 10, stdin);
		s_i[i] = atoi(identifier);
		si_counter++;
	}

	//Fetching number of posts
	printf("Number of posts: ");
	__fpurge(stdin); //flush standard input

	memset(line, 0, sizeof(line));
	fgets(line, 100, stdin);
	m = atoi(line);
	//printf("M is %d\n",m);
	records = (struct lines *)malloc(m * sizeof(struct lines));

	//Fetching posts in order ( identifier popularity post)
	for(i = 0; i < m ; i++){
		__fpurge(stdin); //flush standard input
		memset(line, 0, sizeof(line));
		printf("\nEnter your line : ");
		fgets(line, 100, stdin);

		records[i].f = atoi(strtok(line,s));

		records[i].p = atoi(strtok(NULL,s));

		token = strtok(NULL,s);
		records[i].s = (char *)malloc(strlen(token) + 1);
		strcpy(records[i].s,token);
		
		record_count++;

	}

	specials = (struct lines*)malloc(sizeof(struct lines));
	normals = (struct lines *)malloc(sizeof(struct lines));

	//Finding special friends posts
	printf("\nSI COUNT IS %d RECORD COUNT is %d\n",si_counter,record_count);
	for(i = 0;i < record_count;i++){
		for(j = 0; j < si_counter; j++){
			printf("\nAMRIT records.f is %d and s_i is %d\n",records[i].f,s_i[j]);
			if (records[i].f == s_i[j]){
				flag = 1;
				printf("\nbreak\n");
				break;
			}
		}
		if(flag == 1){
			flag = 0;
			printf("\nAdd to special posts\n");
			specials = realloc(specials,sizeof(struct lines));
			if(specials == NULL){
				printf("\nRealloc Failure for specials\n");
			}else{
				specials[special_records].f = records[i].f;
				specials[special_records].p = records[i].p;
			//	specials[special_records].s = (char *)malloc(strlen(records[i].s) + 1);
			//	strcpy(specials[special_records].s,records[i].s);
				specials[special_records].s = strdup(records[i].s);
				special_records++;
			}
		}else{
			printf("\nAdd to normal posts\n");
			normals = realloc(normals,sizeof(struct lines));
			if(normals == NULL){
				printf("\nRealloc failure for normals\n");
			}else{
				normal_records++;
				normals[normal_records].f = records[i].f;
				normals[normal_records].p = records[i].p;
				//normals[normal_records].s = (char *)malloc(strlen(records[i].s) + 1);
				//strcpy(normals[normal_records].s,records[i].s);
			    normals[normal_records].s = strdup(records[i].s);
				normals++;
			}
		}
	}
	for(i = 0; i < special_records;i++){
		printf("Specials: Identifier %d Popularity %dPost %s\n",specials[i].f,specials[i].p,specials[i].s);
	}
	for(i = 0; i < normal_records;i++){
		printf("Normals: Identifier %d Popularity %dPost %s\n",normals[i].f,normals[i].p,normals[i].s);
	}
#if 0	
	//Sorting special records based on popularity
	for(j = 0;j < special_records-2;j++){
		for(i = 0;i < special_records-1;i++){
			if(specials[i].p > specials[i+1].p){
				temp.f = specials[i].f;
				temp.p = specials[i].p;
				temp.s = strdup(specials[i].s);

				specials[i].f = specials[i+1].f;
				specials[i].p = specials[i+1].p;
				specials[i].s = strdup(specials[i+1].s);

				specials[i+1].f = temp.f;
				specials[i+1].p = temp.p;
				specials[i+1].s = strdup(temp.s);
			}
		}		
	}
	for(i = 0; i < special_records;i++){
		printf("Sorted Specials: Identifier %d Popularity %dPost %s\n",specials[i].f,specials[i].p,specials[i].s);
	}
#endif	
	for(i = 0;i <record_count;i++){
		free(records[i].s);
	}
	for(i = 0;i < special_records;i++){
		free(specials[i].s);
	}
	for(i = 0;i < normal_records;i++){
		free(normals[i].s);
	}
	free(records);
	free(specials);
	free(normals);
	free(s_i);
}




























