#include <iostream>
using namespace std;

int binary_search(int array[], int array_length, int target);
int insertion_sort(int array[], int length);
void print_array(int array[], int length);
void mergesort(int array[], int begin, int end);
void merge(int array[], int left, int mid, int right);

int main(){
    int list[] = {12,11,13,5,6,7};
    int size = sizeof(list)/sizeof(list[0]);
    // int index_5 = binary_search(sorted_list,5,3);
    // cout << index_5;
    mergesort(list, 0, size-1);
    print_array(list, size);
    return 0;
}

int binary_search(int array[], int array_length, int target){
    int lbound = 0;
    int ubound = array_length - 1;

    while(ubound >= lbound){

        int mid = (ubound + lbound)/2;
        if(array[mid] == target){
            return mid;
        }else if(array[mid] > target){
            ubound = mid - 1;
        }else if(array[mid] < target){
            lbound = mid + 1;
        }
    }

    return -1;
}

int insertion_sort(int array[], int array_length){
    for(int i = 1; i < array_length; i++){
        int key = array[i];
        int j = i - 1;

        while(key < array[j] && j > 0){
            array[j + 1] = array[j];
            --j;
        }
        array[j+1] = key;
    }
}


void print_array(int array[], int length){
    for(int i = 0; i < length; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}


void mergesort(int array[], int  const begin, int const end){
    /*
    let mid = (1+length)/2
    mergesort(array[1..median], mid)
    mergesort(array[median+1, length], len-median + 1)

    merge 2 array together
    */
    if(begin >= end){
        return;
    }

    int mid = begin + (end-begin)/2;
    mergesort(array, begin, mid);
    mergesort(array, mid + 1, end);

    merge(array, begin, mid, end);
}

void merge(int array[], int left, int mid, int right){
    int subarray_1 = mid - left + 1;
    int subarray_2 = right - mid;

    int *leftarray = new int[subarray_1];
    int *rightarray = new int[subarray_2];

    for(int i = 0; i < subarray_1; i++){
        leftarray[i] = array[left + i];
    }
    for(int j = 0; j < subarray_2; j++){
        rightarray[j] = array[mid + 1 + j];
    }
    auto index_of_subarray_1 = 0, index_of_subarray_2 = 0;
    int index_of_merged_array = left;

    while(index_of_subarray_1 < subarray_1 && index_of_subarray_2 < subarray_2){
        if(leftarray[index_of_subarray_1] <= rightarray[index_of_subarray_2]){
            array[index_of_merged_array] = leftarray[index_of_subarray_1];
            index_of_subarray_1++;
        }else{
            array[index_of_merged_array] = rightarray[index_of_subarray_2];
            index_of_subarray_2++;
        }
        index_of_merged_array++;
    }

    while(index_of_subarray_1 < subarray_1){
        array[index_of_merged_array] = leftarray[index_of_subarray_1];
        index_of_subarray_1++;
        index_of_merged_array++;
    }

    while(index_of_subarray_2 < subarray_2){
        array[index_of_merged_array] = rightarray[index_of_subarray_2];
        index_of_subarray_2++;
        index_of_merged_array++;
    }

    delete[] leftarray;
    delete[] rightarray;
}