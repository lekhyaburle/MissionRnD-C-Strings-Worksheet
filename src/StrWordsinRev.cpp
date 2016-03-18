/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void reversestring(char *s, char *t);
void str_words_in_rev(char *input, int len){
	char *s = input;
	char *t = input;
	while (len>0){
		t++; len--;
		if (*t == '\0')
			reversestring(s, t - 1);
		if (*t == ' '){
			reversestring(s, t - 1);
			s = t + 1;
		}

	}
	reversestring(input, t - 1);

}

void reversestring(char *s, char *t)
{
	char c;
	while (s < t)
	{
		c = *s;
		*s++ = *t;
		*t-- = c;
	}
}

