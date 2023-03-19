#include <iostream>
using namespace std;

int main(){
    int a = 0;
    if (a == 0){
        cout << a << endl;
        int a = 10; // this 'a' replace the 'a' defined outside the if statement
        cout << a << endl;
    }
    cout << a << endl;
    return 0;
}