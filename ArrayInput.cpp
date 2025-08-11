#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int ar[n];
    cout << "Enter array elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    
    for (int i = 0; i < n; i++) {
        
        cout << "Element at index " << i << ": " << ar[i] << endl;
    }

    return 0;
}