//Ascending Binary Search 
#include <iostream>
using namespace std;
 
int main() {
    int a[100], n, item;
 
    cout << "Enter number of elements (<= 100): ";
    cin >> n;
 
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    cout << "Enter element to search: ";
    cin >> item;
 
    int beg = 0, ende = n - 1;
    int found = 0;
 
    while (beg <= ende) {
        int mid = (beg + ende) / 2;
 
        if (a[mid] == item) {
            cout << "Element found at index " << mid << " and Value is: " << a[mid] << endl;
            found = 1;
            break;
        }
        else if (a[mid] > item) {
            ende = mid - 1;
        }
        else {
            beg = mid + 1;
        }
    }
 
    if (found == 0) {
        cout << "Element not found in the array." << endl;
    }
 
    return 0;
}