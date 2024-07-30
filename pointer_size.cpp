#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void find_index(char* str, char query, int index_list[]){
    // find all query characters in str 
    // then, store the indecies of the query characters in index_list
    // return the number of query characters found
    int count = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == query){
            index_list[count] = i;
            count++;
        }
    }

}

// print the elements in the array
void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    char p[20] = "hello world";
    cout << strlen(p) << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(p + 2) << endl;
    // find the index of all o in p
    int index_list[20];
    find_index(p, 'o', index_list);
    cout << "count: ";
    print_array(index_list, 20);
    
    return 0;
}
    
