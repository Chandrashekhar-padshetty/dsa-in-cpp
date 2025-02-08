#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Input array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Index of the minimum element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) { // Compare values, not indices
                minIndex = j; // Update the index of the minimum element
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[i], arr[minIndex]);
    }

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print sorted array with spaces
    }

  
    system("pause");
  return 0;
}
