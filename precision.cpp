#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main(){
    int bad_count = 0;
    for(int i = 0; i < 10000; i++){
        
        float a = sqrt(i);
        cout << i << " " << setprecision(15) << a;

        if(abs(a * a - i) > 0.0003){
            cout << " !!!";
            bad_count++;
        }
        cout << endl;
    }

    cout << "bad count = " << bad_count << endl;
    return 0;
}
