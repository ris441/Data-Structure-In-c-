// SET data structure is used store unique value . 
// In the set no repeated element present ;
#include<iostream>
#include<set>
using namespace std ; 
int main(){

// create the set 
set<int > s; 
s.insert(0);
s.insert(3);
s.insert(3); 
s.insert(6); 
s.insert(6);
s.insert(9);
s.insert(6);
for(int val : s ){
    cout<<val<< " ";
}
cout<<endl;
cout<<"size of the set : "<< s.size()<<endl;
// deleting the first element 
s.erase(s.begin());
for(auto val : s ){
    cout<< val << " " ;
}
cout<<endl; 
set<int>::iterator it = s.begin();
it++;
// deleting second element in the set 
s.erase(it);
for(auto val : s ){
    cout<<val<<" ";

}
cout<<endl;
s.insert(6);
cout<<"size of the set : "<< s.size()<<endl;
cout<<"5 is present in set or not - "<<s.count(5)<<endl;
cout<<"6 is present in set or not - "<<s.count(6)<<endl;

set<int> :: iterator itr = s.find(6);
cout<<*itr <<endl;
for(auto it = itr ; it!=s.end();it++)
{
    cout<<*it<<" " ; 
}
cout<<endl;
    return 0; 
}