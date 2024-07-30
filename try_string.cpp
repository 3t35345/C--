// import <cstring>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


// void reverse(char* []){

// }
int main(int argc, char const *argv[]){
    // char s1[100] = "123456789";
    // char s2[100];
    // // copy s1 to s2
    // strcpy(s2, s1);
    // cout << "s1 : "<< s1 << endl;
    // cout << "s2 : "<< s2 << endl;
    char name[10][10] = {"Alice", "Bob", "Carol", "David", "Eve", "Frank", "Grace", "Helen", "Ivan", "John"};
    // for(int i = 0; i < 10; i++){
    //     cout << i << " " << name[i][4] << endl;
    // }


    // string ptr = "hello world";
    // reverse(ptr.begin(), ptr.end());
    // cout << ptr << endl;
    cout << endl << endl;
    for(int i = 0; i < argc; i++){
        cout << argv[i] << endl;
    }
    cout << endl << endl;
    return 0;
}