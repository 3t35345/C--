#include <iostream>
/*
a testing space for me to catch up cpp syntax quickly.
*/
using namespace std;

int i = 5;

class A{
    public:
    A(){
        cout << "A" << endl;
    }
    ~A(){
        cout << "a" << endl;
    }
};

class B{
    private:
    A a;

    public:
    B(){
        cout << "B" << endl;
    }
    ~B(){
        cout << "b" << endl;
    }
};
int main(){
    // playground 1

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

    // playground 2
    // char s[3];
    // cin >> s;

    // cout << s[7];

    // playground 3
    // char c[100] = {0};
    // cin >> c; // 123456789
    // cin >> c; // abcde
    // cout << c << endl;
    // c[5] = '*'; // replace the 6th char '/0' with '*'
    // cout << c << endl;


    //playground 4
    // char c[100] = {0};
    // char d[100] = {0};
    // // cin >> c >> d;
    // cin.getline(c, 100);
    // cin.getline(d, 100);
    // cout << c << endl << d << endl;

    /*
    cin vs cin.getline()
    */


   // payground 5
//    char c[100] = "123456789";
//    char *p = c;
//    cout << c << endl;
//    cout << p+3 << endl;

// playground 6
    B b;
    return 0;
}