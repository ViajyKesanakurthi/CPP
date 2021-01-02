#include<iostream>
#include<exception>
using namespace std;

class MyException :public exception {
    public:
    const char* what()const throw() {
        return "My Error\n";
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