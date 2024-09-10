

                    // it's do related to the Heap
                    // default priority queue Max_heap hota hai
                    // important point ki max ko min main kase convert karte hai


#include<iostream>
#include<queue>

using namespace std;
int main(){

    // how to decleard it 
    priority_queue<int> maxi;

    // how to make a min heap
    priority_queue<int, vector<int>, greater<int>> mini;


    // putting values into the maxi
    maxi.push(12);
    maxi.push(122);
    maxi.push(123);
    maxi.push(152);
    maxi.push(1245);

    // how to print the maxi_heap
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<endl;
        maxi.pop();
    }

    cout<<"now priting the mini"<<endl;

    // now putting values into the mini
    mini.push(23232434);
    mini.push(23443);
    mini.push(231);
    mini.push(233);
    mini.push(2323);

    // now priting the values 
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<endl;
        mini.pop();
    }


    // how to check weather it's empty or not 
    cout<<"Are you empty mini ?? -> "<<mini.empty()<<endl;

}
