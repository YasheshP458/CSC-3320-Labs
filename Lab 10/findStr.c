#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char in[21], smallword[21], largeword[21];
	printf("Enter a word: ");
	scanf("%s", in);
	strcpy(smallword, in);
	strcpy(largeword, in);
	while(strlen(in)!= 4) {
		if(strcmp(in, smallword)<0)
			strcpy(smallword, in);
		else if (strcmp(in, largeword)>0)
			strcpy(largeword, in);
		printf("Enter a word: ");
		scanf("%s", in);
	}
	printf("Smallest word: %s\n", smallword);
	printf("Largest word: %s\n", largeword);
	return 0;
}
