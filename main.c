#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char src[100] = "Programming course";
	char dst[100];
	int i;
	
	for(i=0; src[i]!= NULL; i++){
		dst[i] =src[i];
	} 
	dst[i] = '\0';
	/*src 내용을 dst로 옮김*/
	
	while (src[i]!=0)
	i++;
	
	printf("%i\n", strlen(src));
	printf("문자열%s의 길이 : %i\n", src, i);
	return 0;
}
