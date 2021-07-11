#include <iostream>
#include "queue.h"

using namespace std;

Queue::Queue() {
  first = 0;
  last = 0;
  structure = new ItemType[MAX_ITEMS];
}

Queue::~Queue() {
  delete[] structure;
}

bool Queue::isEmpty() {
  return (first == last);
}

bool Queue::isFull() {
  return (last - first == MAX_ITEMS);
}

void Queue::insert(ItemType item) {
  if (isFull()) {
    cout << "The queue is full!\n";
  }
  else {
    structure[last % MAX_ITEMS] = item;
    last++;
  }
}

ItemType Queue::remove() {
  if (isEmpty()) {
    cout << "The queue is empty!";
  }
  else {
    first++;
    return structure[(first - 1) % MAX_ITEMS];
  }
}

void Queue::print() {
  cout << "Queue [ ";
  for (int i = first; i < last; i++) {
    cout << structure[i % MAX_ITEMS] << " ";
  }
  cout << "]\n";
}

