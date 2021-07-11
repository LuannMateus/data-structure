#include <iostream>
#include "dynamicStack.h"
#include <cstddef> //NULL


using namespace std;

DynamicStack::DynamicStack() {
  TopNode = NULL;
};

DynamicStack::~DynamicStack() {
  Node * TempNode;

  while (TopNode != NULL) {
    TempNode = TopNode;
    TopNode = TopNode->next;
    delete TempNode;
  }

};

bool DynamicStack::isFull() {
  Node * NewNode;
  try {
    NewNode = new Node;
    delete NewNode;
    return false;
  }
  catch (bad_alloc exception) {
    return true;
  }
};

bool DynamicStack::isEmpty() {
  return (TopNode == NULL);
};

void DynamicStack::push(ItemType item) {
  if (isFull()) {
    cout << "The stack is full!\n";
    cout << "You cannot add more elements";
  }
  else {
    Node * NewNode = new Node;
    NewNode->value = item;
    NewNode->next = TopNode;
    TopNode = NewNode;
  }
};

ItemType DynamicStack::pop() {
  if (isEmpty()) {
    cout << "The stack is empty!\n";
    cout << "You have no more elements to be removed";
    return 0;
  }
  else {
    Node * TempNode;
    TempNode = TopNode;
    ItemType item = TopNode->value;
    TopNode = TopNode->next;
    delete TempNode;
    return item;
  }

};

void DynamicStack::print() {
  Node * TempNode = TopNode;

  cout << "Stack [ ";

  while (TempNode != NULL) {
    cout << TempNode->value << " ";
    TempNode = TempNode->next;
  }

  cout << "]\n";

};
