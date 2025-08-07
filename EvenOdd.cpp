#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter number of element:"<<endl;
    cin>>n;

    int ar[n];
    int ev,od;
    cout<<"Enter Array  element:";
    for(i=0;i<n;i++){
        
        cin>>ar[i];

    }
    for(i=0;i<n;i++){
    if( ar[i]%2==0){
        
    ev++;

    }
    else{
        od++;
    }
    }
    cout<<"Number of Even number:"<<ev<<endl;
    cout<<"Number of ODD number:"<<od<<endl;



}