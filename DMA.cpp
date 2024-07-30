#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

float avg(int array[], int size){
    int sum = 0;

    // sum up the elements
    for(int i = 0; i < size; i++){
        sum += array[i];
    }

    // return the average value
    return (float)sum / size;
}

// int main(){
//     int l;
//     // input the size of the array
//     cin>>l;

//     //dinamic memeory allocation
//     int *a = new int[l];

//     for(int i = 0; i < l; i++){
//         cin>>a[i];
//     }

//     // calculate the average of the array
//     float average = avg(a, l);

//     //print the average
//     cout << "avaerage: "<< average << endl;
//     return 0;
// }

int main(int argc, char const *argv[]){

    while(1){
        char* p = new char[100];
        cin.getline(p, 100);
        cout << p << endl;
        delete [] p;
    }
        
    return 0;
}