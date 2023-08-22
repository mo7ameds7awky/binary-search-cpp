#include <iostream>

using namespace std;

int binary_search(int arr[], int arr_size, int query) {
    int low = 0;
    int high = arr_size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int guess = arr[mid];
        if (guess == query) {
            return mid;
        }
        if (guess > query) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int result = binary_search(arr, size, 1);
    cout << result << endl;
    return 0;
}
