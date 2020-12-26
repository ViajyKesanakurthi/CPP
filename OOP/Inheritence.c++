#include <iostream>
using namespace std;

class A{
    public:
    int s{4580};

};

class Base
{
    protected:
    int a;
    string b;
    public:
    Base(){  
        a=10;
        b="Base";
    }
virtual void print()
    {
    cout << a << endl << b<<endl;
    }
};

class  Derived : public Base {
    int c;
    string d;
public: 
    Derived()
        {
        c = 100;
        d = "Derrived";
        }
    void print()
        {
        cout << c << endl << d<<endl;
        }
    void test()
        {
        cout << "test";
        }
    };


int main()
{
    Base  p;
    p = Derived();
    p.print();
    Derived d;
    Base &b=d;
    // b.print();
    b.print();
    // d.print();
    
    
return  0;
} 