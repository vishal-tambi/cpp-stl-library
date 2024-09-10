                                        // hole operation time complecity is O(1), the stack and hole thing we discovered (i mean for the hole in stl i am not sure about that i have the check that)

#include<iostream>
#include<queue>

using namespace std;

                // Queue is like first in and first out 
int main(){

    // how to declear and put soemthing into the queue
    queue<string> q;
    q.push("vishal");
    q.push("Tambi");
    q.push("Yash");
    q.push("Tambi");

    cout<<"The first element in the queue "<<q.front()<<endl;

    cout<<"the size of the queue before poping the element for the queue "<<q.size()<<endl;
    q.pop();

    cout<<"now the first element in the queue "<<q.front()<<endl;

    // calculating the size of the queue
    cout<<"the size of the queue after poping and element "<<q.size()<<endl;

}