#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;
int main(){

    // let's say we have to go for the boinary search
    vector<int>v;
    v.push_back(121);
    v.push_back(123);
    v.push_back(134);
    v.push_back(12);
    v.push_back(4);

    // first of all we ned to sort the vector
    sort(v.begin(), v.end());

    cout<<binary_search(v.begin(), v.end(), 4234)<<endl;

    // how to find out the lower bound
    // we sue it to finding out the index of that particular element
    cout<<"lower bound -> "<<lower_bound(v.begin(), v.end(), 4)-v.begin()<<endl;



    // you can do following thigns also
    int a = 20;
    int b = 30;
    cout<<"Max -> "<<max(a,b)<<endl;
    cout<<"Min -> "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"Now the value of a ->"<<a<<endl;


    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"Reversed string -> "<<abcd<<endl;


    // rotating an vector 
    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotating the vector"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;



    // now i am again sorting the vector
    sort(v.begin(), v.end());   //ye wala sort intro sort pe beased hota hai(this type of sort is a combination fo three sort 1. quick, 2.insertion, 3.heap)
    for(auto i:v){
        cout<<i<<" ";
    }


}