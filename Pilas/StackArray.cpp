#include <iostream>
#include <vector>

using namespace std;

template<class T> struct Stack {

  vector<T> item;
  int head;

  Stack() {
    item = vector<T>(1);
    head = 0;
  }

  void push(T val) {
    if (head == item.size()) {
      vector<T> replacement(2 * item.size());
      for (int i = 0; i < head; i++)
        replacement[i] = item[i];
      item = replacement;
    }
    item[head++] = val;
  }

  void pop() {
    if (head == 0)
      throw runtime_error("Cannot pop from the empty stack");
    if (head <= item.size() / 4) {
      vector<T> replacement(item.size() / 2);
      for (int i = 0; i < head; i++)
        replacement[i] = item[i];
      item = replacement;
    }
    head--;
  }

  T top () {
    if (head == 0)
      throw runtime_error("Cannot pop from the empty stack");
    return item[head - 1];
  }

  bool isEmpty() {
    return head == 0;
  }
};


int main() {
  Stack<int> * stack = new Stack<int>();
  cout << stack->isEmpty() << endl;
  stack->push(5);
  stack->push(6);
  stack->push(7);
  cout << stack->isEmpty() << " " << stack->top() << endl;
  stack->pop();
  cout << stack->isEmpty() << " " << stack->top() << endl;
  stack->pop();
  cout << stack->isEmpty() << " " << stack->top() << endl;
  return 0;
}
