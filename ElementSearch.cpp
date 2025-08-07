#include<iostream>
using namespace std;
 
int main(){
    int n;
    int item;
    cout<<"Enter the number of array element: ";
    cin>>n;
 
    int arr[n];
    cout<<"Enter array element : ";
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    cout<<"Enter Item You want to search : ";
    cin>>item;
 
    for(int i=0;i<n;i++){
        if(arr[i]==item){
            cout<<"Item Found at index : "<<i<<endl;
            return 0;
        }
    }
    return -1;
}