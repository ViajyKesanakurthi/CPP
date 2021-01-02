#include<iostream>
using namespace std;

class Abstract {
    public:
    virtual void print() = 0;        //pure virtual function  
    };

class Derived : public Abstract {
    int a;
    string b;
    public:
    Derived() :a{ 10 } , b{ "String" }{

        }
    void print() {
        cout << a << endl << b;
        }
    };

int main()
    {
    Derived ex;
    ex.print();
    return 0;

    }