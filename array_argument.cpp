#include <iostream>
using namespace std;

void print_array(int*, int);
void shift_array(int [], int, int);

int main(){
    int num_array[10] = {1,2,3,4,5,6,7,8,9,10};
    shift_array(num_array, 10, 3);
    print_array(num_array, 10);


    return 0;
}

void print_array(int* array, int array_len){
    for(int i = 0; i < array_len; i++){
        cout << *(array + i) << " ";
    }
    cout << endl;
}

void shift_array(int array[], int len, int x){
    //shift elements in the array x unit to the left
    for(int j = 0; j < x; j++){
        int temp = array[0];
        for(int i = 0; i < len; i++){
            array[i] = array[i + 1];
        }
        array[len - 1] = temp;
    }
    
}