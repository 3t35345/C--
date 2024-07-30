#include<iostream>
#include<vector>
using namespace std;

void print_vector(vector<int> v){
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    vector<int> v_1 = {1,2,3,4,5};
    vector<int> v_2 = {6,7,8,9,10};
    // print out evey element in v_1
    print_vector(v_1);
    v_1.push_back(6);
    print_vector(v_1);
    v_2.push_back(11);
    print_vector(v_2);
}