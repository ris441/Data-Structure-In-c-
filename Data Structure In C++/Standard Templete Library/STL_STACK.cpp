// Stack - stack is a linear data structure which is based on the principal LIFO 
// LIFO means last in first out 
// push and pop operation is performed at the same end . 
// push operation perform to insert an element at top 
// pop operation is perform to delete an element at top 
#include<iostream>
#include<stack>
using namespace std ; 
int main(){

    stack<string> s ;
    s.push("Yadav");
    s.push("Rishabh");
    cout<<"Top of the Stack is- "<<s.top()<<endl;
    int size = s.size();
    cout<<"Printing the stack "<<endl;
    for(int i =0 ; i < size ; i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    // if output 1 its means that stack is empty otherwise stack is not empty 

    cout<<"Stack is empty or NOT - "<< s.empty()<<endl;

    return 0;
}