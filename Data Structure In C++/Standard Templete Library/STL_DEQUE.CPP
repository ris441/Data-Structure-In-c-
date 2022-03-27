#include<iostream>
#include<deque>
using namespace std ;
int main(){ 
    // deque - doubly ended queue  means inserstation and deletion performed  at both the ends.
    // its size is dynamic 

    // creation of deque
    deque<int > d ;
    d.push_back(2);
    d.push_front(1);
    d.push_back(3);
    d.push_front(0);
    cout<<"deque : "<<endl;
    for(int val :  d ){
        cout<<val<<" ";
    } 
    cout<<endl;
    cout<<"pop operation in back : "<<endl;
    d.pop_back();
      for(int val :  d ){
        cout<<val<<" ";
    } 
    cout<<endl;
    cout<<"pop operation in front : "<<endl;
    d.pop_front();
    for(int val : d ){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"first index element : "<< d.at(1)<<endl;
    cout<<"front element : "<<d.front()<<endl;
    cout<<"back or last element : " << d.back()<<endl;
    string  result = (d.empty()==true)?" :- deque is empty " : (":- deque is not empty");
    cout<<"Empty or not ??   "<< result <<endl;
    cout<<"Size of the deque is "<< d.size()<<endl; 
    d.erase(d.begin());
cout<<"Size of the deque is "<< d.size()<<endl; 

   
    d.push_front(1);
    d.push_back(3);
    d.push_front(0);
    for(int val :  d ){
        cout<<val<<" ";
    } 
    cout<<endl;
    d.erase(d.begin(),d.end());
    cout<<"Size of the deque is "<< d.size()<<endl; 
    string  result1 = (d.empty()==true)?" :- deque is empty " : (":- deque is not empty");
    cout<<"Empty or not ??   "<< result1 <<endl;

    return 0 ; 
}