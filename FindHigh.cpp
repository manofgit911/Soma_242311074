#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number Of Array Element: ";
    cin>>n;
 
    int first=INT_MIN;
    int second=INT_MIN;
    int arr[n];
 
    cout<<"Enter Array Eelement:  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
 
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second&& arr[i] !=first){
            second=arr[i];
        }
    }
    cout<<"First higher Element : "<<first<<endl;
    cout<<"Second higher Element : "<<second<<endl;
}