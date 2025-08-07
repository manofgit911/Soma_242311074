#include<iostream>
using namespace std;
 
int main() {
    int a[100], currentSize, insertPos, newElement;
 
    cout << "Enter number of initial elements (max 100): ";
    cin >> currentSize;
 
    cout << "Enter " << currentSize << " elements: ";
    for (int i = 0; i < currentSize; i++) {
        cin >> a[i];
    }
 
    cout << "Enter position to insert (0-based index): ";
    cin >> insertPos;
 
    cout << "Enter new element to insert: ";
    cin >> newElement;
 
    for (int i = currentSize; i > insertPos; i--) {
        a[i] = a[i - 1];
    }
 
    a[insertPos] = newElement;
    currentSize++;
 
    cout << "Updated array: ";
    for (int i = 0; i < currentSize; i++) {
        cout << a[i] << " ";
    }
 
    return 0;
}