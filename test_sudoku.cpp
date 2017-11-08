/*
  File: test_sudoku.cpp
  Author: Oliver Thompson
  Tests solve_sudoku function
*/

#include"test_sudoku.h"

CPPUNIT_TEST_SUITE_REGISTRATION(Test_sudoku);

Test_sudoku::Test_sudoku() : TEST_MAX(100)
{}

void Test_sudoku::test_solve_sudoku()
{

  cout << "TEST SOLVE SUDOKU" << endl;
  cout << "checking solution to a sudoku: ";
  int puzzle[] = { 0, 1, 9, 0, 0, 2, 0, 0, 0,
                   8, 0, 0, 6, 9, 0, 0, 0, 0,
                   0, 5, 7, 4, 0, 0, 0, 0, 0,
                   0, 0, 3, 0, 0, 0, 0, 0, 7,
                   0, 0, 0, 3, 2, 5, 0, 0, 0,
                   4, 0, 0, 0, 0, 0, 8, 0, 0,
                   0, 0, 0, 0, 0, 8, 4, 5, 0,
                   0, 0, 0, 0, 5, 3, 0, 0, 8,
                   0, 0, 0, 9, 0, 0, 6, 1, 0 };

  solve_sudoku(puzzle);

  for(int i = 0; i <= 80; i++)
  {
    cout << puzzle[i] << "  ";
  }

  for(int i=0; i <= 80; i++)
  {
    bool rowGood = true, columnGood = true, boxGood = true;
    int row, column;
    row = (i/9);
    column = (i%9);
    rowGood = true;
    columnGood = true;
    boxGood = true;

    for(int k = (9*row); k <= (9*row + 8); k++)
    {
      if(i != k)
      {
        if(puzzle[i] == puzzle[k])
          {
            rowGood = false;
          }
      }
    }

    for(int m = (column); m <= (72+column); m+=9)
    {
      if(i != m)
      {
        if(puzzle[i] == puzzle[m])
        {
          columnGood = false;
        }
      }
    }

    int temprOrigional = (row/3)*3;
    for(int tempr = ((row/3)*3); tempr <= (temprOrigional+2); tempr++)
    {
      int tempcOrigional = (column/3)*3;
      for(int tempc = (column/3)*3; tempc <= (tempcOrigional+2); tempc++)
      {
        if(i != ((tempr*9) + tempc))
        {
          if(puzzle[i] == puzzle[((tempr*9) + tempc)])
          {
            cout << i << " " << ((tempr*9) +tempc) << endl;
            boxGood = false;
          }
        }
      }
    }

    CPPUNIT_ASSERT(rowGood);
    CPPUNIT_ASSERT(columnGood);
    CPPUNIT_ASSERT(boxGood);
  }
  cout << "PASSED" << endl;
}

