#include <iostream>
using namespace std;

int main(){
    // for(int i = 0, j = 0; i < 10 && j >= -5; i++, j--) {
    //     cout << "i = " << i;
    //     cout << "  j = " << j << endl;
    // }

    // int i;
    // for(int j = 0; j< 20; ++j){
    //     cout << "hello\n";
    // }
    // cout << i << endl;

    // for(int i = 1; i <= 10; i++){
    //     for(int j = 1; j <= 10; j++){
    //         cout << "(" << i << "," << j << ")" << " ";
    //     }
    //     cout << endl;
    // }


    // int a = 0;
    // while(a <= 10){
    //     a++;
    //     cout << a << endl;
    // }

    int a = 0, b = 0;
    while(a <= 10){
        while(b <= 10){
            if (b == 5){
                break;
            }
            cout << a*b << endl;
            b++;
        }
        a++;
    }
    cout << a << endl;
    return 0;
}