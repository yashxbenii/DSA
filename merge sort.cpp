//O(nlog^n)
//divide & conquer   

#include <iostream>
using namespace std;
class my {
public:
    void sort(int arr[], int low, int high) {
        if (low >= high) return;
        int mid = low + (high - low) / 2;
        sort(arr, low, mid);
        sort(arr, mid + 1, high);
        merge(arr, low, mid, high);     // O(n)
    }

    void merge(int arr[], int low, int mid, int high) {
        int n1 = mid - low + 1;
        int n2 = high - mid;

        int* left = new int[n1];
        int* right = new int[n2];

        for (int i = 0; i < n1; ++i)
            left[i] = arr[low + i];
        for (int j = 0; j < n2; ++j)
            right[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = low;

        while (i < n1 && j < n2) {
            if (left[i] <= right[j])
                arr[k++] = left[i++];
            else
                arr[k++] = right[j++];
        }

        while (i < n1)
            arr[k++] = left[i++];
        while (j < n2)
            arr[k++] = right[j++];

    }
};

int main() {
    int arr[] = {5, 2, 4, 7, 1, 3, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    my sorter;
    sorter.sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}


        Bubble    Insertion   Selection    Quick    Merge
Best     n          n           n^2        nlog^n   nloh=g^n
Average  n^2        n^2         n^2        nlog^n   nlog^n
Wrost    n^2        n^2         n^2        n^2      nlog^n


hw leetcode
75,69





