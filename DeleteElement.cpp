#include<iostream>
using namespace std;

int main() {
    int a[100], currentSize, deletePos;

    cout << "Enter number of initial elements (max 100): ";
    cin >> currentSize;

    cout << "Enter " << currentSize << " elements: ";
    for (int i = 0; i < currentSize; i++) {
        cin >> a[i];
    }

    cout << "Enter position to delete (0-based index): ";
    cin >> deletePos;

    for (int i = deletePos; i < currentSize - 1; i++) {
        a[i] = a[i + 1];
    }

    a[currentSize - 1] = 0;

    cout << "Updated array: ";
    for (int i = 0; i < currentSize; i++) {
        cout << a[i] << " ";
    }

    return 0;
}