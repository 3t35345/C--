#include <iostream>
using namespace std;

double finding_max(double [], int);

int main(){
    double ARRAY[10] = {2,3,4,5,6,9,100,8,7,0};
    int length = sizeof(ARRAY)/sizeof(ARRAY[0]);

    cout << finding_max(ARRAY, length) << endl;
    return 0;
}

double finding_max(double target_array[], int len){
    // stopping condition
    if(len == 1){
        return target_array[0];
    }
    double subMax = finding_max(target_array, len -1);

    if (target_array[len-1] > subMax){
        return target_array[len-1];
    }else{
        return subMax;
    }
}

/*
finding the mazimum
*/