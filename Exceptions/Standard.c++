#include<iostream>
#include<exception>
using namespace std;

class Err {
public:
    Err() {
        string * a = new string[9999999];
        delete a;
        }
    };

int main() {
    try {
        Err a;
     }
    catch (bad_alloc & e)
    {
        cout << e.what()<<"ASDf";
    }
    }

