#include <gtest/gtest.h>
#include "AssertList/list.h"
#include "AssertStack/arrayStack.cc"
#include "AssertStack/arrayStack.h"
#include "AssertList/list.cc"

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
  EXPECT_FALSE(p->empty());
}
TEST(List, Assertions) {
  List *a = new List();
  int tam = 11;
  for(int i=0;i < tam;i++){
    a->append(i);
  }
  EXPECT_EQ(tam, a->size());
  EXPECT_FALSE(a->isEmpty());
  EXPECT_EQ(a->get(0), 0);
  a->append(0,99);
  EXPECT_EQ(99,a->get(0));





}
