//Double ended ques similar to vectors.
#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<string>my_deque;
    my_deque.assign(10,"Hello");//assining 10 hello to my_deque
    deque<string>::iterator pos=my_deque.begin();//retruns iterator at begin
    my_deque.insert(pos+3,"Hey");//inserting at sppecific position
    my_deque.push_back("End");//inserting at end
    my_deque.push_front("Start");//inserting at start
    my_deque.erase(pos+3);//deleting at specific position
    for (auto &&i : my_deque) cout<<i<<"\t";
    
}

//Methods
/* end
rbegin
rend
cbegin 
cend 
crbegin 
crend 

size
max_size
resize
empty
shrink_to_fit 
operator[]
at
front
back
assign
push_back
push_front
pop_back
pop_front
insert
erase
swap
clear
emplace 
emplace_front 
emplace_back 
 */