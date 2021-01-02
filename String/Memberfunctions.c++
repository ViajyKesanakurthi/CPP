
#include<iostream>
#include<string>
using namespace std;

int main()
    {
    string sample = "It is asample string" , sam;

    sample.append(" ");
    sample.append(10 , '.');
    cout << sample << endl;

    sam.assign(sample , 3 , 9);
    cout << sam << endl << sam.at(1) << endl;

    string::iterator it;
    it = sample.begin();

    if (*it == sample.front()) cout << "Equal" << endl;

    sample.erase(0 , 6);
    cout << sample << endl;
    sam.clear();
    if (sam.empty())cout << "empty" << endl;

    sample.insert(0 , "it is ");
    cout << sample << endl;

    sample.replace(7 , 9 , 5 , '-');
    cout << sample;







    return 0;
    }
/*  append assign at back begin front end cleat empty find replace insert*/
/* ctype
    isdigit islower isupper toupper isalpha ispunct isspace  isalnum
*/