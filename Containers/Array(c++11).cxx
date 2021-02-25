#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int,10>my_array,my_array2;
    my_array2.fill(2);
    my_array.fill(0);//intialzing all elements with zero
    my_array.swap(my_array2);//Swaping two arrays
    my_array.front()=20;//assigning front
    for(auto &i:my_array) cout<<i<<"\t";
    cout<<endl;
    return 0;

}

// Array is fixed size sequence container

//Methods
/* begin
end
rbegin
rend
cbegin
cend
crbegin
crend
size
max_size
empty
operator[]
at
front
back
data
fill
swap */
