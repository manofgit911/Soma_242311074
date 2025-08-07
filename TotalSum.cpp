#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of Array elements: ";
    cin >> n;

    int ar[n], sum[n];

    cout << "Enter Array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    sum[0] = ar[0];
    for (int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + ar[i];
    }

    cout << "Total sum is: " << sum[n - 1] << endl;

    return 0;
}