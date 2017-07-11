#include <stdio.h>
#include <string.h>

char copy(char *s1, char *s2, int len1, int len2);
void showstring(char *str);

int main(){
#define LENGTH 12
	char *str1 = "Hello, Linux";
	char str2[LENGTH];
	copy(str1, str2, strlen(str1),LENGTH);
	showstring(str2);
}
