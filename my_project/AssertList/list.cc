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
bool List::isEmpty(){
  return tam==0;
}
//TODO
int List::append(int pos,int e){
  Node *lp =head;
  Node *n = new Node();
  n->data =e;

  //tam++;

  Node *resc = head;
  for(int i=0;i < pos ; i++){

    resc = resc->next;
    lp=lp->next;
  }
  lp->next=n;
  n->next=resc;

  tam++;

  return lp->data;
}

int List::get(int pos) {
  Node *tmp = new Node;
  tmp = head;
  for(int i=0;i < pos;i++){
    tmp=tmp->next;
  }
  return tmp->data;
}

int List::size() {
  return tam;
}

int main(){
  List* a = new List();

  a->append(1);
  a->append(21);
  a->append(33);
  a->append(4);

  std::cout << a->append(1,2)<< "\n";


}
