typedef int StackType;
const int MAX_ITEMS = 100;

class Stack {
private:
  int size;
  StackType * structure;

public:
  Stack();
  ~Stack();
  bool isFull();
  bool isEmpty();
  void push(StackType item);
  StackType pop();
  void print();
  int length();
};

