#include <stdio.h>
#include <string.h>
#define MAX_INPUT 256

int main() {
	char input[MAX_INPUT];
	fgets(input, MAX_INPUT, stdin);
	char* pStr = NULL;
	input[strlen(input) - 1] = '\0';
	pStr = input;

	int score = 0;
	while (*pStr != '\0')
	{
		if (*pStr >= 'A' && *pStr <= 'Z')
			score += *pStr - 'A' + 1;
		else if (*pStr >= 'a' && *pStr <= 'z')
			score += *pStr - 'a' + 1;
		pStr++;
	}

	printf("%s is %d score\n", input, score);
	return 0;
}