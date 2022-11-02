#include <gtest/gtest.h>
#include "AssertStack/arrayStack.h"
#include "AssertStack/stack.h"
#include "prueba.cc"
#include "./AssertStack/arrayStack.cc"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  Stack<int> *ptr = new ArrayStack<int>(11);
  // Expect two strings not to be equal.
  //EXPECT_STRNE("hello", "hello");
  // Expect equality.
  EXPECT_EQ(ptr->empty(), false);
}
