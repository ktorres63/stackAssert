#include "arrayStack.h"
#include "stack.h"
#include <assert.h>
#include <iostream>

template <typename T>
void ArrayStack<T>::push(T e) {
  // assert(data<sp); //si es false se cumple assert
  // data siempre debe estar en pos 0

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
  return sp == data;
}

template <typename T>
void ArrayStack<T>::resize() {
  // assert(size > 0);
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

  for (int i = 0; i < size; i++) {
    std::cout << data[i] << ", ";
  }

  //	assert(data<sp);
  /*
		  T *pointer;
		  pointer = data;
		  int a = (sp-1)+0;
		  for(int i =0; i < (sp-1);i++){
				  std::cout << *(pointer+i) << ", ";
		  }
  */

  std::cout << "\n";
}

int main() {
  Stack<int> *ptr = new ArrayStack<int>(11);
  ptr->push(1);
  ptr->push(22);

  ArrayStack<int> *a = new ArrayStack<int>(10);

  a->push(11);
  a->push(199);
  a->push(1);

  int valu = a->pop1();
  std::cout << valu << "\n";

  std::cout << "is empty? " << a->empty() << "\n";
  a->printStack();

  return 0;
}
