#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
	char words[1000];
	char filename[] = "test.txt";
	int charcount[255] = {0};
	int i = 0, max, index;
	FILE *file;
	file = fopen(filename, "r");//read mode
	char ch;
	while (ch != EOF) { //perform until eof
		ch = (char) fgetc(file); //accept the char
		words[i] = ch;
		if (ch >= 65 && ch <= 92)
			charcount[ch + 32]++;
		else
			if (ch >= 97 && ch <= 122) {
				charcount[ch]++;
			}
		i++;
	}
	max = charcount[0];
	index = 0;
	for (i = 0; i < strlen(words) - 1; i++) {
		if (charcount[words[i]] > max) {
		max = charcount[words[i]];
		index = i;
		}
	}
	printf("The maximum character is : %c. It appears %d times.\n", words[index], charcount[words[index]]);
	return (EXIT_SUCCESS);
}
