#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	FILE *fp = NULL;
	int i;
	char input[100];
	
	fp=fopen("sample.txt","w");  		//쓸거니까 w 넣기 
	
	for(i=0; i<3; i++) {
		printf("input: a word: ");
		scanf("%s", input);
		fprintf(fp, "%s\n", input);
	}
	
	fclose(fp);
}
