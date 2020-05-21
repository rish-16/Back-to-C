#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char * sentence = "Hello world";
	char sentence2[] = "Hello world";
	
	int len = strlen(sentence);
	printf ("%d\n", len);
	
	char word1[20] = "Hello ";
	char word2[20] = "World";
	
	strncat(word1, word2, strlen(word2));
	printf ("%s\n", word1);
}