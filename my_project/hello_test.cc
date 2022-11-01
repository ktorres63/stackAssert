#include <gtest/gtest.h>
#include "prueba.cc"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  //EXPECT_STRNE("hello", "hello");
  // Expect equality.
  EXPECT_EQ(sum(1,2), 3);
}
