#include <iostream>

using namespace std;


class bubbleSort
{
public:
    bubbleSort() {}
    ~bubbleSort() {}

    void sort(){
        int length = sizeof(arr) / sizeof(arr[0]);
        if(length < 0){
            return;
        }
        for(int i = 0; i < length; ++i){
            int minValue = arr[i];
            int index = i;
            for(int j = i + 1; j < length; ++j){
                if(minValue > arr[j]){
                    index = j;
                    minValue = arr[j];
                }
            }
            if(index != i){
                int tmp = arr[i];
                arr[i] = arr[index];
                arr[index] = tmp;
            }
        }
    }
};
