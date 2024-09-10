#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector bhi array ki trah hi hota hai
    // eski memory dynamic allocation hoti hai
    // let's say ki phele vector ka sice 4 tha, and then you try to put the fifth element init so what it does that it make its sixe double, Automatically 

    // size=> kitne element ha ieski ender
    // capacity=> total kitne memory esko allocate hoeee hai (kitne element k liye esko memory allocate hoee hai)

    vector<int>v;
    cout<<"capacity of the just made vector "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity of vector now "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity of vector now "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"capacity of vector now "<<v.capacity()<<endl;

    // now for calculating the sizoe of an vector
    cout<<"The size of my vacot is "<<v.size()<<endl;

    // we can also access the particulr element in the vecotr, just like the array in the stl
    cout<<"element at the 2nd Index "<<v.at(2)<<endl;

    // we can also use front and back operation, just like array
    // we can also use pop _pack() funciton, exclude the last element 
    // v.clear(), use to clear all the elements in the vactor, not the capacity ...that will be the smae as privious
    // there one more important one . v.being();
    
    
    }