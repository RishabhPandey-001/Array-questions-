#include <iostream>
using namespace std;

int largestElement(int arr[], int n) { 
    int largest = arr[0]; // Initialize largest with the first element
    for (int i = 0; i < n-1; i++) { // Start from the second element
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if a larger value is found
        }
    }
    return largest; // Return the largest element
}

int main() {
    int n = 5; 
    int arr[5] = {2, 1, 4, 5, 3}; // Correctly initialize the array

    cout << "The largest element is: " << largestElement(arr, n) << endl;
    return 0;
}

