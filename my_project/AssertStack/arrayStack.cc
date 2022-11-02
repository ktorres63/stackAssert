#include "arrayStack.h"
#include "stack.h"
#include <assert.h>
#include <iostream>

template <typename T>
void ArrayStack<T>::push(T e) {

  int numElem = sp - data;
  if (size == numElem) {
// assert(size>numElem)  // si no hubiese resize
    resize();
  }
  *sp = e;
  sp++;
}
template <typename T>
void ArrayStack<T>::pop() {
  // assert(sp>0);
  if (empty())
    return;
  sp--;
}
template <typename T>
T ArrayStack<T>::top() {
  assert(!empty());
  return *(sp - 1);
}

template <typename T>
bool ArrayStack<T>::empty() {
  assert((sp-data)>0);
  return sp == data;
}

template <typename T>
void ArrayStack<T>::resize() {
  assert(size > 0);
  T *newData = new T[size + FACTOR]; // newData[]
  for (int i = 0; i < size; i++) {
    newData[i] = data[i];
  }
  sp = newData + size;
  size += FACTOR;
  delete[] data;
  data = newData;
}
//-------------------------------------//
template <typename T>
T ArrayStack<T>::pop1() {
  assert(!empty());
  sp--;
  return *(sp);
}

template <typename T>
void ArrayStack<T>::printStack() {
  //assert(data<sp);
  for (int i=0; i< sizeOc(); i++){
    std:: cout << data[i] << ", ";
  }
  std::cout << "\n";

}
template <typename T>

int ArrayStack<T>::sizeOc(){
  return sp -data;
}
int main() {
  Stack<int> *ptr = new ArrayStack<int>(11);
  ptr->push(1);
  ptr->push(22);

  ArrayStack<int> *a = new ArrayStack<int>(10);

  a->push(11);
  a->push(199);
  a->push(1);
  std::cout << "is empty? " << a->empty() << "\n";
  a->printStack();
  std::cout << a->sizeOc() << "\n";
  std::cout << a->sizeOc() << "\n";

  return 0;
}
