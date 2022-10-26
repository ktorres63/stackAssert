#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H
#include "stack.h"
#define FACTOR 10

template<typename T>
class ArrayStack: public Stack<T>{
	private:
		T data[];
		int size; //memory size
		T* sp; // stack pointer
		void resize();
	public:
		ArrayStack(int s): size{s}, data{new T[size]}, sp{data}{}; //sp{&data[0]
		~ArrayStack(){ delete [] data;}
		void push(T);
		void pop();
		T top();
		bool empty();
		T pop1();

		
};
#endif



