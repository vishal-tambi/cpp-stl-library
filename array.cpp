#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[] = {1,2,3,4,5};
    // by using the stl
    // we do not prefered this array in the compatitave programming cause ther are multiple resons for that , one of the most common reaosn is the lack of dynamic memory allocation 
    
    array<int,4> a = {1,2,3,4};
    // how can we access this array
    int size = a.size();
    for(int i=0;i<size;i++){
        cout<<"The element of the array is following :"<<a[i]<<endl;
    }

    // Following is the one mroe way we can access the array elements
    cout<<"Element at the 2nd index "<<a.at(2)<<endl;
    cout<<"Element at the 4th index "<<a.at(3)<<endl;
    return 0;
}
