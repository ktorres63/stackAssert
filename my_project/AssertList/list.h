#ifndef LIST_H
#define LIST_H

class Node {
  public:
  int data;
  Node* next;
};

class List {
  public: //private
    Node* head;
    Node* last;
    int tam;

  public:
    List();
    List *append(int e);
    int headA();
    List *tail();
    bool isEmpty();
    int size();
};
#endif