#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    float* arr = new float[size];
    cout << "Enter the values for the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    float largest = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }
    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}