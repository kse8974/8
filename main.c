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
	/*src ������ dst�� �ű�*/
	
	while (src[i]!=0)
	i++;
	
	printf("%i\n", strlen(src));
	printf("���ڿ�%s�� ���� : %i\n", src, i);
	return 0;
}
