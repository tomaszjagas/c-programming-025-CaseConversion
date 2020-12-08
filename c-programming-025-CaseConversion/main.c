#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	char text[100]; // input buffer for string to be searched
	char subString[40]; // input buffer for string

	printf("Enter string to be searched (less than %d characters):\n", 100);
	scanf("%s", text);

	printf("Enter text which you are looking for (less than %d characters):\n", 40);
	scanf("%s", subString);

	printf("First string entered: \n%s\n", text);
	printf("Second string entered: \n%s\n", subString);

	int i = 0;
	// convert both strings into upper case
	for (i = 0; (text[i] = (char)toupper(text[i])) != '\0'; ++i);
	for (i = 0; (subString[i] = (char)toupper(subString[i])) != '\0'; ++i);

	printf("The second string %s found in the first.\n", ((strstr(text, subString) == NULL) ? "was not" : "was"));

	return 0;
}