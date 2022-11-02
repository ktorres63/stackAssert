#ifndef LIST_H
#define LIST_H

class Node {
  public:
  int data;
  Node* next;
};

class List {
  private: //TODO private
    Node* head;
    Node* last;
    int tam;

  public:
    List();
    List *append(int e);
    List *append(int i,int e);
    int get(int i);
    bool isEmpty();
    int size();
};
#endif
