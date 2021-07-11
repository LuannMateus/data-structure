typedef int ItemType;
const int MAX_ITEMS = 100;

struct Node {
  ItemType value;
  Node * next;
};

class DynamicQueue {
private:
  Node * first;
  Node * last;

public:
  DynamicQueue();
  ~DynamicQueue();
  bool isEmpty();
  bool isFull();
  void insert(ItemType item);
  ItemType remove();
  void print();

};