#include <iostream>
using namespace std;
 
int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;
 
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int comparison = 0;
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            comparison++;
            cout << "Comparison " << comparison << ": ";
            if (arr[j] < arr[j + 1]) {   // descending
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
            // print array after this comparison
            for (int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        if (!swapped) break;
    }
 
    cout << "Final sorted array (descending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 
    return 0;
}