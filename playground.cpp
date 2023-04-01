#include <iostream>
/*
a testing space for me to catch up cpp syntax quickly.
*/
using namespace std;

int i = 5;

int main(){
    // // using the global i
    // // 5 6 7 8 9 10 ... 17 18 19
    // for(; i < 20; ++i){
    //     cout << i << " ";
    // }
    // cout << endl;

    // // define a local i
    // int i = 2;
    // cout << i << endl;

    // // the global i
    // cout << ::i << endl;
    char s[3];
    cin >> s;

    cout << s[7];
    return 0;
}