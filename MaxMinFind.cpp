#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int ar[n];
    cout << "Enter element: ";
    for (int i = 0; i < n; i++) {
        
        cin >> ar[i];
    }

    int mx = ar[0], mn = ar[0];
    int mxIndex = 0, mnIndex = 0;

    for (int i = 1; i < n; i++) {
        if (ar[i] > mx) {
            mx = ar[i];
            mxIndex = i;
        }
        if (ar[i] < mn) {
            mn = ar[i];
            mnIndex = i;
        }
    }

    cout << "Maximum Number: " << mx << " at Index " << mxIndex << endl;
    cout << "Minimum Number: " << mn << " at Index " << mnIndex << endl;

    return 0;
}