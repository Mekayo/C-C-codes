#include <iostream>
using namespace std;

void merge(int* arr, int s, int e) {
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* first = new int[len1];
    int* second = new int[len2];

    int k = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[k++];
    }
    /* second hlf of an array */
    k = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[k++];
    }
/* adding array first and second */
    int ind1 = 0, ind2 = 0;
    k = s;
    while (ind1 < len1 && ind2 < len2) {
        
        if (first[ind1] <= second[ind2]) {
            arr[k++] = first[ind1++];
        }
        
        
         else {
            arr[k++] = second[ind2++];
        }
    }

    // Copy remaining elements of first[], if any
    while (ind1 < len1) {
        arr[k++] = first[ind1++];
    }

    // Copy remaining elements of second[], if any
    while (ind2 < len2) {
        arr[k++] = second[ind2++];
    }

    delete[] first;
    delete[] second;
}

void mergesort(int* arr, int st, int ed) {
    if (st >= ed) {
        return;
    }

    int mid = st + (ed - st) / 2;

    mergesort(arr, st, mid);// use to divide left side of the array 
    mergesort(arr, mid + 1, ed);//use to divide right side of the array 
    merge(arr, st, ed);//use to sort divided array (conqure)

}

int main() {
    int arr[2] = {8,2};
    int n = 2;

    mergesort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
