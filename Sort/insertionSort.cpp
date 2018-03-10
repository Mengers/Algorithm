#include <iostream>

using namespace std;



class insertionSort
{
public:
    insertionSort() {}
    ~insertionSort() {}

    void sort(){
        int length = sizeof(arr) / sizeof(arr[0]);
        if(arr == NULL || length < 2)
            return;
        for(int i = 0; i < length; ++i){
            for(int j = i - 1; j >= 0 && arr[j] > arr[j+1]; --j) {
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
};