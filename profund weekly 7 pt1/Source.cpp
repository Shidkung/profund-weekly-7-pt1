#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
int main() {
	char string[100];
	int i = 0;
	printf("Enter STRING : ");
	scanf("%s", string);
	while (string[++i] != '\0');
	for (int j = i - 1; j >= 0; j--)
		printf("%c", string[j]);
	return 0;
}
