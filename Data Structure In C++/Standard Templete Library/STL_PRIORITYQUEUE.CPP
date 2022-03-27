//Priority Queue is related to max heap or min heap 
// In the max heap first fetch the maximize value then second 
// maximize and so on . ..
// In the min heap first fetch the minimize value then second 
// minimize and so on . ..
#include<iostream>
#include<queue>
using namespace std ;
int main() {
    // creation of maxHeap - 
    priority_queue<int> max ;
    max.push(5);
    max.push(8);
    max.push(3);
    max.push(9);
    int size = max.size();
    cout<<"Printing the maxHeap ... "<<endl;
for(int i=0 ; i<size ; i++ ){
    cout<<max.top()<<endl;
    max.pop();
}

    // create minHeap - 
    priority_queue<int,vector<int>,greater<int>> min;
    min.push(5);
    min.push(8);
    min.push(3);
    min.push(9);
    int size1 = min.size();
    cout<<"Printing the minHeap ... "<<endl;
for(int i=0 ; i<size1 ; i++ ){
    cout<<min.top()<<endl;
    min.pop();
}
    return 0; 
}
