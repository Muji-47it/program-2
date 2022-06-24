#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[3]={3,4,5};
    int arr2[3];
  /*  arr2[0]=arr[0];
    arr2[1]=arr[1];
    arr2[2]=arr[2];
    cout<<arr2[0];
    cout<<arr2[1];
    cout<<arr2[2];*/
    
   for(int i=0;i<3;i++)
    arr2[i]=arr[i];
    for(int i=0;i<3;i++)
    cout<<arr2[i]<<endl;
}
