typedef int ItemType;
const int MAX_ITEMS = 100;


struct Node {
  ItemType value;
  Node * next;
};

class DynamicStack {
private:
  Node * TopNode;

public:
  DynamicStack();
  ~DynamicStack();
  bool isFull();
  bool isEmpty();
  void push(ItemType item);
  ItemType pop();
  void print();
};

