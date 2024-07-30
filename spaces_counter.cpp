// the user input a string and the program counts the number of spaces in the string

#include <iostream>
using namespace std;

int main(){
    char input[10000] = {0}; // the input string

    while(cin.getline(input, 10000)){   // read a line of input
        int count = 0;
        for(int i = 0; input[i] != '\0'; ++i){ // scan through the string

            if(input[i] == ' '){ // if the current char is a space, count it
                ++count; 
            }
        }
        cout << "no of space : " <<count << endl; // print the result
    }
    return 0;
}