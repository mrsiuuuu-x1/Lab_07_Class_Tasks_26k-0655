#include <stdio.h>

int main() {
	int row, col;
	
	for (row = 5; row >= 1; row--) {
		if (row % 2 != 0) {
			for (col = 1; col <= row; col++) {
				printf("*");
			}
		}
		printf("\n");
	}
}
