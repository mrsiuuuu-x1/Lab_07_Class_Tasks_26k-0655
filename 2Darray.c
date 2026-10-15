#include <stdio.h>

int main() {
	int i, j;
	int scores[3][4] = {
		{10,22,35,41},
		{50,65,73,80},
		{91,10,11,12}
	};
	
	for (i = 0; i < 3; i++) {
		int sum = 0;
		for (j = 0; j < 4; j++) {
			sum += scores[i][j];
		}
		printf("Matrix[%d][%d] score is: %d\n", i, j, sum);
	}
}











