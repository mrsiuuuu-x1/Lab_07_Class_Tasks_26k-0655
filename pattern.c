#include <stdio.h>

int main() {
	int rows;
	int col;
	for (rows = 1; rows <= 5; rows++) {
		for (col = 1; col <= 5; col++) {
			printf("*");
		}
		printf("\n");
	}
}
