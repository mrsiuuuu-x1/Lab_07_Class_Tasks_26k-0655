#include <stdio.h>

int main() {
	int id[5] = {101, 205, 103, 205, 101};
	int i, j;
	
	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (id[i] == id[j]) {
				printf("\nDuplicate id %d",id[i]);
				break;
			}
		}
	}
}
