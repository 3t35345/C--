#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // print integers from 1 to 100
    for(int i = 1; i <= 100; i++){
        char s[3];
        itoa(i,s,3);
        cout << s << endl;
    }

    return 0;
}