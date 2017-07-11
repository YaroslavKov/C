#include <string.h>

void copy(char *s1, char *s2, int len1, int len2){
	int i = 0;
	while(i < len1 && i < len2){
		s2[i] = s1[i];
		i++;
	}
}
