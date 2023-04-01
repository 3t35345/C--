#include <iostream>
#include <cctype>
using namespace std;

// User input a character each time
// Then, the program will turn the character into an lower if it is an upper
// print out the converted character
// repeat above steps until the user input nothing

int main(){
    // char c;
    // while (cin >> c){
    //     if (isupper(c)){
    //         c = tolower(c);
    //         cout << c << endl;
    //     }else{
    //         cout << c << endl;
    //     }
        
    // }

    char s[10];
    int n = 0;
    do{

        cin >> s[n];
        n++;

    }while(s[n-1] != '#' && n < 10);
    
    for(int i = 0; i < n-1; i++){
        cout << s[i];
    }
    return 0;
}