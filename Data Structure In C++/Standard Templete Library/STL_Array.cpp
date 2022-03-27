#include<iostream>
#include<array>
using namespace std;
int main (){
    // 
 cout<< "Array in Standard Templete Library :- "<<endl;
 // In stl array has static size means size is not change .
array<int , 5 > stlarray = {3,5,3,6,8} ; 
cout<<"Printing Array element ... "<< endl ; 
for(int i : stlarray){
    cout<<i << " ";
}
cout << endl; 
int size  = stlarray.size();
for (int  i = 0; i < size ; i++)
{
    cout<< stlarray[i]<<" "; 
}
cout << endl; 
cout<< "Printing the element at 2 nd index : "<<stlarray.at(2)<< endl;
string result =( stlarray.empty()==0) ? "-NOT EMPTY " :("- EMPTY  "); 
cout << " check array is empty or not "  << result<<endl;
cout<<"First Element of  stl  array is  "<< stlarray.front()<< endl ; 
cout<<"Last Element of stl array is "<< stlarray.back()<<endl;
 
 
 
 
 
 // these  such operation on STL array in c++ which we perform 
 
  return 0 ;  
} 
