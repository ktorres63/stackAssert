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
List* List::append(int pos,int e){
  Node *lp =head;
  Node *resc;

  Node *n= new Node();
  n->data=e;

  if(pos==0){
    n->next=lp;
    head=n;
  }

  else{
  for(int i=0;i < pos-1 ; i++){ // si pos =0 no funciona
    lp=lp->next;
  }
  resc = lp->next;

  lp->next=n;
  n->next=resc;
  }
  tam++;
  return this;
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
void List::print(){
  Node *tmp = head;
  for(int i =0 ; i< tam;i++){
    std::cout << tmp->data <<", ";
    tmp=tmp->next;
  }
  std::cout << "\n";
}

int main(){
  List* a = new List();

  a->append(1);
  //99
  a->append(21);
  a->append(33);
  a->append(84);
  //a->append(1,39);

//  std::cout << a->append(0,99)<< "\n";
  std::cout << a->head->data << "\n";
  std::cout << "size: " << a->size() << "\n";
  a->print();


}
