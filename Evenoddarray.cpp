#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array size:";
    cin >> n;
    int arr[n], even[n], odd[n];
    int evenCount = 0, oddCount = 0;
    cout << "Enter Array elements:";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        bool isEven = (arr[i] % 2 == 0);
        if (isEven)
            even[evenCount++] = arr[i];
        else
            odd[oddCount++] = arr[i];
    }

    cout << "The Even Array is: ";
    for (int i = 0; i < evenCount; i++) {
        cout << even[i] << " ";
    }
    cout << "\n";

    cout << "The Odd Array is: ";
    for (int i = 0; i < oddCount; i++) {
        cout << odd[i] << " ";
    }
    cout << "\n";

    return 0;
}
