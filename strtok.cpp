// using strtok() to parse a string
// strtok() is a function that takes a string and a delimiter
// it returns a pointer to the first token in the string
// it also modifies the string by replacing the delimiter with a null character
// it returns a null pointer when there are no more tokens

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char word[20][50] = {0};
    char delim[] = "./";
    char str[] = "https://poe.com/ChatGPT";
    cout << str << endl;
    char* token = strtok(str, delim);
    cout << token << endl;
    int count = 0;

    while(token != NULL){
        strcpy(word[count], token);
        token = strtok(NULL, delim);
        count++;
    }
    
    for(int i = 0; i < count; i++){
        cout << word[i] << " ";
    }
    return 0;
}

