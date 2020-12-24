#include<iostream>
using namespace std;

void  err()
{
    bool a=false,b=true,c=b;
    if(a){
        throw("Its an error");
    }
    if (b) {
        throw(string("Its an string error"));
        }
    if (c) {
        throw(12);
        }
}

int main()
{
    try{
        err();
    }
    catch(string &e)
    {
        cout << e;
    }
    catch(char  const *e)
    {
        cout << e;
    }
    catch(int e)
    {
        cout << e;
    }
}