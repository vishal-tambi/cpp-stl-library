#include<iostream>
#include<list>
using namespace std;

/***
Array:

Fixed-size, continuous block of memory where elements are stored sequentially.
The size is specified at the time of creation and cannot be changed dynamically.
Supports fast access to elements via index (O(1) time complexity).

List (std::list):

A doubly-linked list where each element points to the previous and next elements.
The size can grow or shrink dynamically.
No random access to elements; access is done sequentially, and finding an element requires traversal (O(n) time complexity for accessing the nth element). */

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    // for(int i:l){
    //     cout<<i<<" ";
    // }

    // begin, end, empty
    // time complecity of them ☝️ is, O(1)
    // erase ki time complexcity is O(n), kuki her element per jakar use erase karna padega


    // using the erase function
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" "<<endl;
    }

    // calculating size of the list
    cout<<"The size of the list "<<l.size()<<endl;

    // creating an new list and printing it
    list<int> n(5,100);
    for(int i: n){
        cout<<i<<" "<<endl;
    }
}