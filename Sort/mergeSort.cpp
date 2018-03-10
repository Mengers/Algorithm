#include <iostream>

using namespace std;


class mergeSort
{
public:
    mergeSort() {}
    ~mergeSort() {}


    void mergesort(){
        int length = sizeof(arr) / sizeof(arr[0]);
        if(arr == NULL || length < 2){ 
            return;
        }
        mergesort(arr, 0, length);
    }

    void mergesort(int arr[], int L, int R){
        if(L == R){
            return;
        }
        int mid = L + ((R - L) >> 1);
        mergesort(arr, L, mid);
        mergesort(arr, mid + 1, R);
        merge(arr, L, mid, R);
    }

    void merge(int arr[], int l, int m, int r){
        int help[l-r+1];
        int i = 0;
        int p1 = l;
        int p2 = m + 1;
        while (p1 <= m && p2 <= r) {
            help[i++] = arr[p1] < arr[p2] ? arr[p1++] : arr[p2++];
        }
        while (p1 <= m) {
            help[i++] = arr[p1++];
        }
        while (p2 <= r) {
            help[i++] = arr[p2++];
        }
        for(int i = 0; i < l - r + 1; ++i){
            arr[i + l] = help[i];
        }
    }
};


