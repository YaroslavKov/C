#include <stdio.h>

void showstring(char *str){
	int i = 0;
	while(str[i] != '\0'){
	putchar(str[i++]);
	}
	printf("\n");
}
