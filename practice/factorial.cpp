#include <iostream>
using namespace std;


long long factorial(int);
long long fibonacci(int);

int main(){
    for(int i = 1; i < 100; i++){
        cout << fibonacci(i) << endl;
    }

    return 0;
}

long long factorial(int n){
    if (n == 0){
        return 1;
    }
    return factorial(n-1) * n;
}

long long fibonacci(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}