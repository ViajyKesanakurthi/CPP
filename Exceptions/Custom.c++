#include<iostream>
#include<exception>
using namespace std;

class MyException :public exception {
    public:
    virtual const char* what()const throw() {
        return "My Error";
        }
    };

int main(){
    try{
        if(true){
            throw MyException();
        }
    }
    catch (exception& e) {
        cout << e.what();
        }
}