
#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    if (n < 1 || n > 1000) {
        cout << "Invalid array size";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            } else {
                break;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}