# Write a C++ program to sort the elements in ascending and descending order.
#include <iostream>
using namespace std;

class A {
public:
    void display() {
        int n;

        cout << "Enter the number of elements: ";
        cin >> n;

        if (n <= 0 || n > 100) {
            cout << "Invalid input. Number of elements must be between 1 and 100." << endl;
            return;
        }

        int arr[100];
        cout << "Enter " << n << " values:" << endl;

        // Input array elements
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Bubble sort in descending order
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] < arr[j + 1]) {
                    // Manual swapping without built-in function
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        // Bubble sort in ascending order
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Manual swapping without built-in function
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        // Display the sorted elements
        cout << "Sorted elements in descending order:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    A obj;
    obj.display();
    return 0;
}
