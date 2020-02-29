#include <stdio.h>
#define SIZE 10

int main () {
	char board [SIZE] [SIZE] = {"8rnbqkbnr",
				    "7pppppppp",
				    "6        ",
				    "5        ",
				    "4        ",
				    "3        ",
				    "2PPPPPPPP",
				    "1RNBQKBMR",
				    " abcdefgh"}
	for(int i = 0; i < SIZE ; i++) {
		for(int j = 0; j < SIZE ; i++) {
			printf("%c ", board [i] [j];
		}
		printf("\n");
	}

return 0;
}

