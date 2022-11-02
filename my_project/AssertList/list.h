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
    List *append(int );
    List *append(int,int);
    int get(int );
    bool isEmpty();
    int size();
};
#endif
