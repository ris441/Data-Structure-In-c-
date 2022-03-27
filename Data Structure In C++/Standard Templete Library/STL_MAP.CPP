#include<iostream>
#include<map>
using namespace std; 
int main(){
    //In STL map - two value store first one is key which is act as a index of particular data .
    // Another one is data which at specific key . key is not repeated or not assign to another data .
    // while data of any two or more key's is same . 
    map<int,string> manchitr;
    // here snytax is - map < key , data> name_of_map;

    // inserting in map 
    manchitr[1]="rishabh "; 
    manchitr[56]="Yadav";
    manchitr[10]="cse";
    // another way to insert in map 
    manchitr.insert({5 , "2nd Year"});
    for(auto i : manchitr){
        cout<<i.first<<" " <<i.second<<endl;
    }
    // hence printing the sorted order according to key value .
    cout<<endl;

// IN the map searching is performed according to key value 

   cout<<"finding the key 10 - "<<manchitr.count(10)<<endl;// 1 means Yes 
   cout<<"finding the key 11 - "<<manchitr.count(11)<<endl;// 0 means NO 
   // to perform erase operation to particular key  pass that key in the function
   // argument of erase function
   cout<<"Erasing data at key 10 ..."<<endl;
   manchitr.erase(10);
   for(auto val : manchitr){
       cout<<"key["<<val.first<<"] -> data["<<val.second<<"] . "<<endl;
   }
   /// another way to print 
   cout<<endl<<endl;
   cout<<"Printing key data which is start from key -- 5 ..."<<endl;
   auto it = manchitr.find(5);
   for(auto i = it ; i != manchitr.end(); i++){
        cout<<"key["<<(*i).first<<"] -> data["<<(*i).second<<"] . "<<endl;
   }


    return 0 ;
}