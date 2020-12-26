#include<iostream>
#include<string>
using namespace std;

int main()
    {
    string a(" Hey");
    string b = to_string(100 + 1) + a;
    string c("101");
    string::size_type sz;
    int e = stoi(c , &sz) + 1;
    cout << e << endl;
    cout << b;
    }