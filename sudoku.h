/*
  File: sudoku.h
  Author: Oliver Thompson
  Solves Sudokus

  Function: solve_sudoku(int board[])
  Provides access to a recursive sudoku solver.

    Parameters:
    board - The sudoku puzzle board. 0's represent a position that is not
    defined by the puzzle and numbers 1 through 9 represent values that are
    defined by the puzzle and are therefore not editable. An example:
    int puzzle[] = { 0, 1, 9, 0, 0, 2, 0, 0, 0,
                     8, 0, 0, 6, 9, 0, 0, 0, 0,
                     0, 5, 7, 4, 0, 0, 0, 0, 0,
                     0, 0, 3, 0, 0, 0, 0, 0, 7,
                     0, 0, 0, 3, 2, 5, 0, 0, 0,
                     4, 0, 0, 0, 0, 0, 8, 0, 0,
                     0, 0, 0, 0, 0, 8, 4, 5, 0,
                     0, 0, 0, 0, 5, 3, 0, 0, 8,
                     0, 0, 0, 9, 0, 0, 6, 1, 0 };
*/
#ifndef SUDOKU_H
#define SUDOKU_H

void solve_sudoku(int board[]);

#endif

