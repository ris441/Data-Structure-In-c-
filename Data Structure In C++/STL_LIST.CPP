// LIST is implemented using doubly linked list 
// direct index value of list is not accessable
#include<iostream > 
#include<list>
using namespace std ; 
int main() {
    // creation of list 
    list <int> suchi ; 
    suchi.push_back(2);
    suchi.push_front(1);
    suchi.push_back(3);
    suchi.push_front(0);


    // printing the list
    cout<<" printing the list..."<<endl;
    for(int val : suchi){
        cout<<val<<" ";
    }
    cout<<endl;
    suchi.erase(suchi.begin());
     cout<<" printing the list after erasing begin value ..."<<endl;
    for(int val : suchi){
        cout<<val<<" ";
    }
    cout<<endl;
    // coping the suchi(list) to l (another list )
    cout<<"copying the suchi into another list l ... "<<endl;
    list<int>l(suchi);
    cout<<"printing the copied list : "<<endl; 
     for(int val : l){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Erasing the whole list (suchi ) ..."<<endl;
    suchi.erase(suchi.begin(),suchi.end());
    string ans = (suchi.empty())? "Empty": "NOT EMPTY";
    cout << "Is suchi is empty - "<<ans<<endl;
    
    // creating list of size 5 containg at all the indexes  100
    cout<<"initilize all list value to 100 "<<endl;
    list<int>inlize(5,100);

  cout<<"printing the initilize list : "<<endl; 
     for(int val : inlize){
        cout<<val<<" ";
    }
    cout<<endl;

    
    return 0 ;
}