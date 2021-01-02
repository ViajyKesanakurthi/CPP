#include<iostream>
#include<exception>
#include<typeinfo>
#include<new>
using namespace std;


class A { A() {} };
int main() {
    try {
        int* a = new int[-9];
        A* b = 0;
        cout << typeid(*b).name();
     }
    catch (bad_array_new_length& e) {
        cerr << e.what();
        }
    catch (bad_typeid& e)
    {
        cerr << e.what() << "exception";
    }
    }

