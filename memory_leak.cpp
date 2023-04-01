#include <iostream>
using namespace std;

int main(){
    // demostrate memory leak
    for(int i=0; ;i++){
        int* p = new int[100000];
        delete [] p;
        cout << *p << endl;
        p = nullptr;
    }
    return 0;
}