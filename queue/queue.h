typedef int ItemType;
const int MAX_ITEMS = 100;

class Queue {
private:
  int first, last;
  ItemType * structure;

public:
  Queue();
  ~Queue();
  bool isEmpty();
  bool isFull();
  void insert(ItemType item);
  ItemType remove();
  void print();

};