#include <assert.h>
#include <iostream>
#include "arrayStack.h"
template<typename T>
void ArrayStack<T>::push(T e){
	assert(data<sp); //si es false se cumple assert
					 //data siempre debe estar en pos 0
	int numElem = sp -data;
	if(size == numElem){
		//TODO
		resize();
	}
	*sp = e;
	sp++;

}
template<typename T>
bool ArrayStack<T>::empty(){
	return sp==data;
}
template<typename T>
void ArrayStack<T>::resize(){
	T newData[] = new T[size+FACTOR];
	for(int i = 0; i < size; i++){
		newData[i] = data[i];
	}
	sp = newData + size;
	size+= FACTOR;
	delete[] data;
	data = newData;
}
template<typename T>
T ArrayStack<T>::top(){
	assert(!empty());
	return *(sp-1);
}

template<typename T>
void ArrayStack<T>::pop(){
	assert(sp>0);
	if(empty())
		return;
	sp--;
}

template<typename T>
T ArrayStack<T>::pop1(){
	assert(!empty());
	sp--;
	return *(sp);
}
template<typename T>
int ArrayStack<T>::tamOcup(){
	int tam =(sp-1);
	return tam;
}

template<typename T>
void ArrayStack<T>::printStack(){
	assert(data<sp);
	T *pointer;
	pointer = data;
	for(int i =0; i < (sp-1);i++){
		std::cout << *(pointer+i) << ", ";
	}
/* Otra forma
	for (auto val: data){
		std::cout << val << ", ";
	}
*/
	std::cout << "\n";
}
