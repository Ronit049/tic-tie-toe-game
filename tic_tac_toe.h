#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

void printBoard(char board[3][3]);
int checkWinner(char board[3][3]);
int isMovesLeft(char board[3][3]);
int minimax(char board[3][3], int depth, int isMax);
void findBestMove(char board[3][3]);

#endif
