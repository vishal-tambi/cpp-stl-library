#include<iostream>
#include<map>
using namespace std;

                // map k ander data key value apir main store hota hai
                // multiple keys can not be the same name (i mean to say that her ak key ka name unique hona chaiye)
                // ask key kavel ak hi value ko point karte hai, not more then one (but ya it could be possible that more thern one key same value ko point kare)

int main(){
    // how to declear a map
    map<int, string> m;
    m[1] = "Vishal";
    m[6] = "Tambi";
    m[4] = "Yash";
    m[56] = "Tambi";

    // another way to insert element in a map
    m.insert({45, "Vishal Tambi"});

    // how to print the map

    // it will going to print the hope map in sorted way (but if we going to print the unsorted map then it will print in a unsorted way)


    cout<<"before erase all the elements"<<endl;

    for(auto i:m){
        cout<<i.first<<endl;
    }


    //use of count in map (use to check an elemnet is their or not )
    cout<<"56 is their ->"<<m.count(56)<<endl;

    cout<<"after erase the element"<<endl;

    m.erase(56);
    for(auto i:m){
        cout<<i.first<<endl;
    }



    // ordered map main search ki time complecity O(log n ) hoti hai, but in the case of unsorted map the search operation time complexcity will be O(n)



    // use of find in the map
    // find returns the iterator of that particulr element
    auto it = m.find(45);
    for(auto i=it;i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }

}


                        // code vise the unorderd map will be the same 
                        