#include <iostream>
using namespace std;

void print_array(int arr[], int n);

int main(){
    // create a 2D array with pointers of size r
    int r = 10;
    int **array = new int*[r];
    for(int i = 0; i <= r; i++){
        array[i] = new int[r + 1];
        for(int j = 0; j <= i; j++){
            array[i][j] = (i) * (j + 1);
        }

        print_array(array[i], i);
    }

    return 0;
}

void print_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] < 10){
            cout << " " << arr[i] << " ";
        }else{
            cout << arr[i] << " ";
        }
        
    }
    cout << endl;
}