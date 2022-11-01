#include "list.h"
#include <iostream>

List::List(){
  head = nullptr;
  last = nullptr;
}
List* List::append(int e){
  Node *n =new Node;
  n->data = e;
  n->next = nullptr;

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
int List::size() {
  int c = 0;
  Node *iter = last;
  while (iter) {
    iter = iter->next;
    if (iter == last)
      iter = nullptr;
    c++;
  }
  return c;
}

int main(){
  List* a = new List();

  a->append(1);
  a->append(2);

  int val= a->headA();
  int val2 = a->head->next->data;
  int val3 = a->last->data;

  std::cout << val << "\n";
  std::cout << val2 << "\n";
  std::cout << val3 << "\n";

}
