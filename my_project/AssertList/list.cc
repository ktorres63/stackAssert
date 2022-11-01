#include "list.h"

List::List(){
  head = nullptr;
  last = nullptr;
}
List* List::append(int e){
  Node *n =new Node;
  n->data = e;
  n->next = nullptr;

  if(head == nullptr){
    head = new Node;
    head->data = e;
    head->next = nullptr;
    return this;
  }
  else{
    Node *n = new Node;
    n->data = e;
    n->next = nullptr;


    last = new Node;
    last->data = e;
    last->next = nullptr;
    return this;
  }
  Node *n = new Node;
  n->data = e;
  n->next = last->next;
  last->next = n;
  last = n;
  return this;
}
int List::headA() { return last->next->data; }
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
