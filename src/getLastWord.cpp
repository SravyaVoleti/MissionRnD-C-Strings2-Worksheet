/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

int length(char *str) {
	int len = 0;
	for (int i = 0; *(str + i) != '\0'; i++) {
		len++;
	}
	return len;
}

char * get_last_word(char * str){

	char *sub = NULL;
	int i,c,k=0,len = 0;
	len = length(str);
	for (i = len; i >= 0; i--) {
		if (*(str + i) != ' ')
			break;
		len--;
	}
	if (i == len)
		i = 0;
	else
		i = i + 1;
	for (c = i; c <= len; c++) {
		sub = (char *)calloc(1, sizeof(char));
		*(sub + k) = *(str + c);
		k++;
	}
	return sub;
}
