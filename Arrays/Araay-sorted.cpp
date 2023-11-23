#include<bits/stdc++.h>
using namespace std;
bool isSortedAscending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 5, 7, 3};
    int n = 5;

    if (isSortedAscending(arr, n)) {
        cout << "Array is sorted in ascending order." << endl;
    } else {
        cout << "Array is not sorted in ascending order." << endl;
    }

    return 0;
} 

   
