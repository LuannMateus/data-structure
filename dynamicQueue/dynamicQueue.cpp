#include <iostream>
#include "dynamicQueue.h"
#include <cstddef>

using namespace std;

DynamicQueue::DynamicQueue() {
  first = NULL;
  last = NULL;
}

DynamicQueue::~DynamicQueue() {
  Node * temp;

  while (temp != NULL) {
    temp = first;
    first = first->next;
    delete temp;
  }

  last = NULL;
}

bool DynamicQueue::isEmpty() {
  return (first == NULL);
}

bool DynamicQueue::isFull() {
  Node * temp;

  try {
    temp = new Node;
    delete temp;
    return false;
  }
  catch (bad_alloc exception) {
    return true;
  }
}

void DynamicQueue::insert(ItemType item) {
  if (isFull()) {
    cout << "The DynamicQueue is full!\n";
  }
  else {
    Node * newNode = new Node;
    newNode->value = item;
    newNode->next = NULL;
    if (first == NULL) {
      first = newNode;
    }
    else {
      last->next = newNode;
    }
    last = newNode;
  }
}

ItemType DynamicQueue::remove() {
  if (isEmpty()) {
    cout << "The DynamicQueue is empty!";
  }
  else {
    Node * temp = first;
    ItemType item = first->value;
    first = first->next;
    if (first == NULL) {
      last = NULL;
    }

    delete temp;
    return item;
  }
}

void DynamicQueue::print() {
  Node * temp = first;

  cout << "DynamicQueue [ ";
  while (temp != NULL) {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << "]\n";
}

