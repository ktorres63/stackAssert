#include "arrayStack.h"
#include "stack.h"
#include <assert.h>
#include <iostream>

template <typename T>
void ArrayStack<T>::push(T e) {
  int numElem = sp - data;

// assert(size>numElem)  // si no hubiese resize
  if (size == numElem) {
    resize();
  }
  *sp = e;
  sp++;
}
template <typename T>
void ArrayStack<T>::pop() {
  int nelem= sp-data;
  assert(nelem < 0);

  if (empty())
    return;
  sp--;
}
template <typename T>
T ArrayStack<T>::top() {
  assert(!empty());
  T top = *(sp -1);
  assert(top != *sp);
  return top;
}

template <typename T>
bool ArrayStack<T>::empty() {
  int nelem=sp-data;
  return sp == data;
}

template <typename T>
void ArrayStack<T>::resize() {

  assert((size + FACTOR) > sp-data);
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
  for (int i=0; i< sizeOc(); i++){
    std:: cout << data[i] << ", ";
  }
  std::cout << "\n";

}
template <typename T>

int ArrayStack<T>::sizeOc(){
  int nelem= sp-data;
  assert(nelem < 0);

  return nelem;
}
/*
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
*/
