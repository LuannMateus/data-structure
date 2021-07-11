#include <iostream>
#include "dynamicQueue.h"

using namespace std;

int main() {
  DynamicQueue queue;
  ItemType item;
  int option;

  cout << "Generate Queue Programming";

  do {
    cout << "\nType 0 to stop the programming!\n";
    cout << "Type 1 to insert um element!\n";
    cout << "Type 2 to remove um element!\n";
    cout << "Type 3 to print the stack!\n";

    cin >> option;

    if (option == 1) {
      cout << "Type the element to be insert: ";
      cin >> item;

      queue.insert(item);
    }
    else if (option == 2) {
      item = queue.remove();
      cout << "The element removed: " << item << endl;
    }
    else if (option == 3) {
      queue.print();
    }


  } while (option != 0);


  return 0;
}