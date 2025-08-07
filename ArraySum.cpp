#include<iostream>
using namespace std;
 
int main()
{
    int n;
 
    cout<<"Enter the number of array element : ";
    cin>>n;
 
    int arr[n],sum[n];
    cout<<"Enter Array Element: ";
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sum[0]=arr[0];
 
    for(int i=1; i<n; i++)
    {
        sum[i]=sum[i-1]+arr[i];
    }
 
    for(int i=0; i<n; i++)
    {
        cout<<sum[i]<<" ";
    }
    cout<<endl;
}