#include <stdio.h>
#define SIZE 10

int main ()
 {

	char board[SIZE][SIZE] = {"8|rnbqkbnr",
				  "7|pppppppp",
				  "6|        ",
				  "5|        ",
				  "4|        ",
				  "3|        ",
				  "2|PPPPPPPP",
				  "1|RNBQKBNR",
				  "  ________",
				  "  abcdefgh"};
	for(int i = 0; i < SIZE ; i++) {
		for(int j = 0; j < SIZE ; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

	return 0;
}

