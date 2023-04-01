#include <iostream>
#include <string>
#include <cctype>
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

    // int a = 0, b = 0;
    // while(a <= 10){
    //     while(b <= 10){
    //         if (b == 5){
    //             break;
    //         }
    //         cout << a*b << endl;
    //         b++;
    //     }
    //     a++;
    // }
    // cout << a << endl;

    // int array[10] = {1,2,3,4,5,6,7,8,9,10};
    char text[] = "hello world";
    
    int i = 0;
    while(text[i]){
        text[i] = toupper(text[i]);
        cout << text[i] << " ";
        i++;
    }
    return 0;
}