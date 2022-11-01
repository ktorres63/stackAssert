#ifndef LIST_H
#define LIST_H

class Node {
  public:
  int data;
  Node* next;
};

class List {
  private:
    Node* head;
    Node* last;

  public:
    List();
    List *append(int e);
    int headA();
    List *tail();
    bool isEmpty();
    int size();
};
#endif
