/*
  File: test_sudoku.h
  Author: Oliver Thompson
  Tests solve_sudoku function
*/

#ifndef TEST_SUDOKU_H
#define TEST_SUDOKU_H

#include<cppunit/extensions/HelperMacros.h>
#include<cppunit/config/SourcePrefix.h>
#include<stdexcept>
using std::out_of_range;
#include<iostream>
using std::cout;
using std::endl;

#include"sudoku.h"
class Test_sudoku : public CPPUNIT_NS::TestFixture
{
 public:
  Test_sudoku();

 private:
  CPPUNIT_TEST_SUITE(Test_sudoku);
  CPPUNIT_TEST(test_solve_sudoku);
  CPPUNIT_TEST_SUITE_END();
  unsigned int TEST_MAX;

 protected:
  void test_solve_sudoku();
};

#endif

