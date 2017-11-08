/*
  File: sudoku.cpp
  Author: Oliver Thompson
  Solves Sudokus
*/

#include"sudoku.h"
#include<iostream>
using std::cout;
using std::endl;
void solve_sudoku(int board[])
{
  bool finished = false;

  for(int i=0; i <= 80; i++)
  {
    if(board[i] == 0)
    {
      bool rowGood = true, columnGood = true, boxGood = true;
      int row, column;
      row = (i/9);
      column = (i%9);
      for(int j=1; j<=9; j++)
      {
        rowGood = true;
        columnGood = true;
        boxGood = true;

        for(int k = (9*row); k <= (9*row + 8); k++)
        {
          if(j == board[k])
          {
            rowGood = false;
          }
        }

        for(int m = (column); m <= (72+column); m+=9)
        {
          if(j == board[m])
          {
            columnGood = false;
          }
        }

        int temprOrigional = (row/3)*3;
        for(int tempr = ((row/3)*3); tempr <= (temprOrigional+2); tempr++)
        {
          int tempcOrigional = (column/3)*3;
          for(int tempc = (column/3)*3; tempc <= (tempcOrigional+2); tempc++)
          {
            if(j == board[(tempr*9) + tempc])
            {
              boxGood = false;
            }
          }
        }

        if(rowGood == true && columnGood == true && boxGood == true)
        {
          board[i] = j;

          finished = true;
          for(int n=0; n <=80; n++)
          {
            if(board[n] == 0)
            {
              finished = false;
            }
          }

          if(finished == true)
          {
            return;
          }

          solve_sudoku(board);

          finished = true;
          for(int n=0; n <=80; n++)
          {
            if(board[n] == 0)
            {
              finished = false;
            }
          }

          if(finished == true)
          {
            return;
          }
        }

        else
        {
          board[i] = 0;
        }
      }

      board[i] = 0;
      return;
    }
  }
}

