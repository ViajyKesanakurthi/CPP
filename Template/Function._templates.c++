#include<iostream>
using namespace std;

template<typename T , typename S>
auto sum(T a , T b) ->decltype(a + b) {
    return a + b;
    }

int main() {
    cout << sum<int , double>(10 , 10.3);
    return 0;
    }