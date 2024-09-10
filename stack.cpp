#include<iostream>
#include<stack>
using namespace std;

// first in last out (shadi ki plate ka example)

int main(){
    stack<string> s;
    s.push("Vishal");
    s.push("Tambi");

    // how to print the stack 
    cout<<"the first top element is "<<s.top()<<endl;

    s.pop();  //poping the element form the stack

    cout<<"Now after poping the elemet the first top element is "<<s.top()<<endl;

    cout<<"size of the stack "<<s.size()<<endl;

    cout<<"the stack is empty of not "<<s.empty()<<endl;
}