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
            int count = 0;
            for (int k = 0; k < n; k++)
            {
                if (ar[k] == ar[i])
                    count++;
            }
            cout << ar[i] << ": " << count << endl;
        }
    }
 
    return 0;
}