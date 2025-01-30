#include <stdio.h>
#include "tic_tac_toe.h"

// Function to print the board
void printBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
}

// Function to check if any player has won
int checkWinner(char board[3][3]) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return (board[i][0] == 'O') ? 10 : -10;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return (board[0][i] == 'O') ? 10 : -10;
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return (board[0][0] == 'O') ? 10 : -10;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return (board[0][2] == 'O') ? 10 : -10;
    
    return 0; // No winner yet
}

// Function to check if there are moves left
int isMovesLeft(char board[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ') return 1;
    return 0;
}

// Minimax function
int minimax(char board[3][3], int depth, int isMax) {
    int score = checkWinner(board);
    if (score == 10) return score - depth;
    if (score == -10) return score + depth;
    if (!isMovesLeft(board)) return 0;

    if (isMax) {
        int best = -1000;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = 'O';
                    best = (best > minimax(board, depth + 1, 0)) ? best : minimax(board, depth + 1, 0);
                    board[i][j] = ' ';
                }
            }
        }
        return best;
    } else {
        int best = 1000;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = 'X';
                    best = (best < minimax(board, depth + 1, 1)) ? best : minimax(board, depth + 1, 1);
                    board[i][j] = ' ';
                }
            }
        }
        return best;
    }
}

// Function to find the best move for AI
void findBestMove(char board[3][3]) {
    int bestVal = -1000;
    int bestMoveRow = -1, bestMoveCol = -1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = 'O';
                int moveVal = minimax(board, 0, 0);
                board[i][j] = ' ';
                if (moveVal > bestVal) {
                    bestMoveRow = i;
                    bestMoveCol = j;
                    bestVal = moveVal;
                }
            }
        }
    }
    board[bestMoveRow][bestMoveCol] = 'O';
}
