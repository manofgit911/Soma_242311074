#include<iostream>
using namespace std;
int main()
{
    int n;
 
    cout<<"Enter the number of array element: ";
    cin>>n;
    int arra[n];
 
    cout<<"Enter array element: ";
 
    for(int i=0; i<n; i++)
    {
        cin>>arra[i];
    }
 
    cout<<"Reverse array: ";
 
    for(int i=n-1; i>=0; i--)
    {
        cout<<arra[i]<<" ";
    }
 
    cout<<endl;
    return 0;
}