//Queue is a linear data structure which is based on the principal FIFO 
// FIFO means first come first out 
// In the Queue operation is performed both the ends of queue data Structure ; 
// push operation is performed at the rear (back) position of the Queue ;
// pop operation is performed at the front position of the Queue .
#include<iostream>
#include<queue>
using namespace std; 
int main(){
    // create the Queue 
    queue<string> q ; 
    q.push("Insert at first - Rishabh");
    q.push("Insert at second - Yadav");
    int size = q.size();
    for (int i = 0; i < size; i++)
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    
    return 0 ;
}