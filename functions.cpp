#include <iostream>
using namespace std;

// define prototype
//return_type function_name(parameters);
int add(int num1, int num2);
int test(int a);
void inverse(long long);

int main(){
    // int a = 10;
    // int b = 20;
    // int c = add(a,b);
    // cout << c;
    long long a = 0;
    cin >> a;
    inverse(a);
    return 0;
}

// body
int add(int num1, int num2){
    return num1+ num2;
}

int test(int a){
    if(a > 0){
        return 5;
    }
    return 909;
}

void inverse(long long num){
    while(num >= 0){
        cout << num%10 << " ";
        if(num < 10){
            return;
        }
        num /= 10;
    }
    return;
}