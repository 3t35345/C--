#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int result = 0;
    // the input process won't stop as long as an integer is successfully read
    // while(cin >> num){
    //     result += num;
    // }

    while(true){
        if(cin >> num){
            result += num;
        }else{
            break;
        }
    }
    cout << result;
    return 0;
}