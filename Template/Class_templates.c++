#include<iostream>
using namespace std;


//we can use both typename an class

template<class T>
class Stack {
    static int top;
    int size;
    T* contain;
public:
    Stack(int size) {
        contain = new T[size];
        this->size = size;
        }
    bool isempty() {
        if (top == -1) {
            return true;
            }
        return false;
        }
    bool isfull() {
        if (top == size - 1) {
            return true;
            }
        return false;
        }
    void push(T data) {
        if (isfull()) {
            return;
            }
        contain[++top] = data;
        }
    T pop() {
        return contain[top--];
        }
    };
template <class T>
int Stack<T>::top = -1;

int main() {
    Stack<int>a(5);
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    cout << a.pop() << endl << a.pop() << endl << a.pop() << endl << a.pop();
    return 0;
    }