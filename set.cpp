                // there will be only unique elements in a set 
                // eski emplementaion behinds the seems BST ka use krake hota hai 
                // esmain app elements ka modification nahi kar sakte (ak baar daal diya toh vo hi rahega)
                // if you want to print the elements of your set then it will come as sorted form 



                // sorted set                                           //unsorted set
                // sorted ine are bit slower then the unsorted one

#include<iostream>
#include<set>

using namespace std;
int main(){

    // how to decleard a set
    // insert, find, erase, count (all these methods contains the time complexcity of O(logn)
    set<int>s;
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(57);
    s.insert(57);
    s.insert(57);


    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    // how to delete and element in a an set 
    s.erase(s.begin());

    for(auto i:s){
        cout<<i<<endl;
    }


    // using of count in set
    cout<<"The count of element "<<s.count(57)<<endl;

    // using of find in the set
    set<int>::iterator itr = s.find(57);

    for(auto it= itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

    // cout<<"value present at its -> "<<*itr<<endl;

}