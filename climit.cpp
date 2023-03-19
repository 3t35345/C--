#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;


int main(){
    long long a = 0;
    float b = 0.0;
    cout << FLT_MIN << ',' << FLT_MAX << endl;
    cout << LLONG_MIN << ',' << LLONG_MAX << endl;
    cout << sizeof(long long) << ',' << sizeof(double) << endl;

    return 0;
}
