#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string a = "0100101";
    int result = 0;
    int base = 2;
    // cout << a.length() << endl;
    for(int i = a.length(); i >= 0; i -= 3){
        cout << i-3 << endl;
    }

    cout << "result = " << result << endl;
    // cout << "1 = " << (int)'1' << endl;
    return 0;
}