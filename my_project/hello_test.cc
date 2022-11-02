#include <gtest/gtest.h>
#include "AssertStack/arrayStack.cc"
#include "AssertStack/arrayStack.h"
//#include "AssertList/list.cc"

// Demonstrate some basic assertions.
TEST(Stack, Assertions) {
  Stack<int> *p = new ArrayStack<int>(11);
  p->push(1);
  p->push(12);
  EXPECT_EQ(p->empty(), false);
}

TEST(ArrayStack, Assertions) {
  ArrayStack<int> *p = new ArrayStack<int>(9);
  p->push(8);
  p->push(3);
  p->push(9);
  EXPECT_EQ(p->empty(), false);
}
TEST(List, Assertions) {

  EXPECT_EQ(7 *2, 14);
}
