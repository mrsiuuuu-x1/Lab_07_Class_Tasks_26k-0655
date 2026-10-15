#include <stdio.h>

int main() {
	int row, total_row, col;
	
	for (row = 1; row <= 5; row++) {
		for (total_row = 5; total_row > row; total_row--) {
			printf(" ");
		}
		for (col = 1; col <= row; col++) {
			printf("* ");
		}
		printf("\n");
	}
}
