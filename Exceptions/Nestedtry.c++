#include<iostream>
using namespace std;

int main()
    {
    try {

        try {
            throw("Inner Try Block\n");

            }
        catch (const char* e) {
            cout << e;
            throw(string("Outter Try Block"));
            }

        }
    catch (const string& e) {
        cout << e;
        }

    }