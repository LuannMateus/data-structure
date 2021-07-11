#include <iostream>
#include "stack.h"


using namespace std;

Stack::Stack() {
  size = 0;
  structure = new StackType[MAX_ITEMS];
};

Stack::~Stack() {
  delete[] structure;

};

bool Stack::isFull() {
  return (size == MAX_ITEMS);
};

bool Stack::isEmpty() {
  return (size == 0);
};

void Stack::push(StackType item) {
  if (isFull()) {
    cout << "The stack is full!\n";
    cout << "You cannot add more elements";
  }
  else {
    structure[size] = item;
    size++;
  }
};

StackType Stack::pop() {
  if (isEmpty()) {
    cout << "The stack is empty!\n";
    cout << "You have no more elements to be removed";
    return 0;
  }
  else {
    size--;
    return structure[size];
  }

};

void Stack::print() {
  cout << "Stack [ ";

  for (int i = 0; i < size; i++) {
    cout << structure[i] << " ";
  }

  cout << "]\n";

};

int Stack::length() {
  return size;
};

