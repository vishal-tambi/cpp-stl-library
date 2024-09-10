#include<iostream>
#include<deque>
using namespace std;
int main(){
    // ager appka man kar rah kai ki insertion and ddeletion aapko front se karna hai ya back se karna hia toh aap done se hi kar sakte hai
    // bhot sare fix static arrayes ka use karke ese implement kiya jata hai
    // this is also dynamic
    // rendom access is possible, by us ing the at operation 
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    // d.pop_back();
    // d.pop_front();
    // cout<<"element in the deque "<<endl;
    // for(int i: d){
    //     cout<<i<<" ";
    // }

    cout<<"The first index in teh deque is "<<d.at(1)<<endl;
    cout<<"The 0th index in teh deque is "<<d.at(0)<<endl;

    // you can also use the front and back operation in deque

    cout<<"before earing the size of the deque "<<d.size()<<endl; 
    // d.erase(d.begin(), d.end());
    // if you want ot erase the particular element 
    d.erase(d.begin(), d.begin()+1);
    cout<<"after earing the size of the deque "<<d.size()<<endl;

    /*** difference between size and max_size 
     *   erase k baad size emepty ho jata hai, but the max_size is going to be the same as it begin in the starting      
     * */ 

    

}