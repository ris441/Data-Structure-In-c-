#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // vector is same as array but in the vector size is dynamic in which after the vector is full
    // vector is copied in the new vector which has double size for example if we create one size of
    // vector then we push the another value then vector is full automatically  size-two of vector is
    // created then so so on . ..

    // creation of vector
    vector<int> stl_v(5, 1); 
    // in this sense 5 is size or capacity of vector and here 1 is initilaizing 
    //1 as all value of vector


    // printing the vector 
    for(int value : stl_v){
        cout<<value <<" ";
    }
    cout<<endl;
    cout<<"capacity of stl_v : "<<stl_v.capacity()<<endl;

    //Push_back operation is used to insert an element at last of the vector  
    stl_v.push_back(2);


    // printing the vector after the pushing two 
    for(int value : stl_v){
        cout<<value <<" ";
    }
    cout<<endl;
    cout<<"capacity of stl_v : "<<stl_v.capacity()<<endl;
    // But here size is different thing . size is only the present element in the vector 
    cout<<"size of vector: "<< stl_v.size()<<endl;

    //Printing the value at index 5 
     cout<<"Printing the value at index 5  is "<<stl_v.at(5)<<endl;

     // POP operation is deleting the last element of vector 
     stl_v.pop_back(); 
     cout<<"After poping an element from stl_v ..."<<endl; 
      for(int value : stl_v){
        cout<<value <<" ";
    }
    cout<<endl;
    cout<<"capacity of stl_v : "<<stl_v.capacity()<<endl;

    // clearing tha all element from the vector  ... 
    stl_v.clear();
    cout<<"capacity of stl_v : "<<stl_v.capacity()<<endl;
    cout<<"size of vector: "<< stl_v.size()<<endl;

    vector<int> v = {4, 7 ,9 ,49 , 0 ,1};


    // copying the vector in the new vector ...
    vector<int>vect_cpy(v);
    vect_cpy.push_back(78);
    // print the copied vector plus the new vector 
    for(int c_val : vect_cpy){
        cout<< c_val<<" ";
    }
    cout<<endl; 


    
    cout << "front element :"<< vect_cpy.front()<<endl;
    cout<<" last element : "<<vect_cpy.back()<<endl;



     return 0;
}