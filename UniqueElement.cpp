#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
 
    int ar[n];
     cout << "Enter the array element: ";
    for (int i = 0; i < n; i++)
    {
       
        cin >> ar[i];
    }
    
     cout << "Unique Element Array is: " << endl;
 
    for (int i = 0; i < n; i++)
    {
        bool uq = true;
        for (int j = 0; j < i; j++)
        {
            if (ar[i] == ar[j])
            {
                uq = false;
                break;
            }
        }
        if (uq)
        {
        
            cout << ar[i] << " ";
        }
    }
    
    cout << endl;
 
    return 0;
}