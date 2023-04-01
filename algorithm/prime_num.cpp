#include <iostream>
using namespace std;

// int isPrime(int);

// int main(){
//     int num = 10000;
//     int num_of_prime = 0;

//     for(int i = 2; i < num; i++){
//         if(isPrime(num)){
//             num_of_prime++;
//         }
//     }
//     cout << endl << num_of_prime << endl;

//     return 0;
// }

// int isPrime(int num){
//     for(int j = 2; j * j <= num; j++){
//         if(num%j == 0){
//             return false;
//         }
//     }
//     cout << num << endl;
//     return true;
// }
void ruleOutPtime(int x, bool isPrime[], int n);

int main(){
    bool A[1000000] = {false};
    int num_of_prime = 0;

    int A_size = sizeof(A)/sizeof(A[0]);
    for(int i = 0; i < A_size; i++){
        A[i] = true;
    }

    for(int i = 2; i < A_size; i++){
        if(A[i] == true){
            num_of_prime++;
            ruleOutPtime(i, A, A_size);
        }
    }
    cout << endl << num_of_prime << endl;
    return 0;
}

void ruleOutPtime(int x, bool isPrime[], int n){
    for(int i = 1; x*i < n; i++){
        isPrime[x*i] = false;
    }
}
/*
Given a Boolean array A of length n
Initialize all elements in A to be true // assume they are prime
for i from 2 to n
    if A_i is true
        print i
        for j from 1 to floor(n/j)
            Set A[i*j] to flase
*/