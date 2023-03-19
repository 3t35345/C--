#include <iostream>
using namespace std;

int main(){
    // int array[5] = {0};
    // int array_size = sizeof(array)/sizeof(array[0]);
    // for(int i = 0; i < array_size; i++){
    //     cin >> array[i];
    // }
    // for(int i = 0; i < array_size; i++){
    //     cout << array[i] << " ";
    // }
    // cout << endl << array;
    // return 0;
    int array_2d[5][5] = {0};
    for(int i = 1; i <= 5;i++){
        for(int j = 1; j <= 5; j++){
            array_2d[i-1][j-1] = 5*i+j;
            if(array_2d[i-1][j-1] < 10){
                cout << " ";
            }
            cout << array_2d[i-1][j-1] << " ";
        }
        cout << endl;
    }
    // int array_size = sizeof(array_2d)/sizeof(array_2d[0][0]);
    cout << array_2d[1] + 1 << endl; 
    cout << array_2d[1] << endl;
    
    return 0;
}