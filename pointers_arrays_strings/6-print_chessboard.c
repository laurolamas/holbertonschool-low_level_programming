#include "main.h"

/**
 * print_chessboard - printit
 *
 * @a: a
 *
 * Return: void
 *
 */

void print_chessboard(char (*a)[8])
{
	char board[8][8] = {
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
	};
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			_putchar (board[i][j]);
		}
		_putchar('\n');
	}

}
