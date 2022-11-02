#include "list.h"
#include <iostream>

List::List(){
  head = nullptr;
  last = nullptr;
  tam = 0;
}
List* List::append(int e){
  Node *n =new Node;
  n->data = e;
  n->next = nullptr;

  tam++;

  if(head == nullptr){
    head = n;
    last =n;
  }
  else{
    last->next = n;
    last = n;
  }
  return this;
}
int List::headA() {
  return head->data; }

//TODO
int List::size() {
  return tam;
}



int main(){
  List* a = new List();

  a->append(1);
  a->append(2);
  a->append(33);

  int val= a->headA();
  int val2 = a->head->next->data;
  int val3 = a->last->data;

  std::cout << val << "\n";
  std::cout << val2 << "\n";
  std::cout << a->size() << "\n";

}
