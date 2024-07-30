#include <iostream>
using namespace std;

class MyVector{
    private:
        int n;
        int* m;
    public:
        MyVector();
        MyVector(int dim, int value = 0);
        MyVector(int dim, int* value);
        void print();
        ~MyVector();
};

MyVector::MyVector(){
    n = 0;
    m = nullptr;
}

MyVector::MyVector(int dim, int value){
    n = dim;
    m = new int[n];
    for(int i = 0; i < n; i++){
        m[i] = value;
    }
}

MyVector::MyVector(int dim, int* value){
    n = dim;
    m = new int[n];
    for(int i = 0; i < n; i++){
        m[i] = value[i];
    }
}
// print the vector 
void MyVector::print(){
    cout << "[";
    for(int i = 0; i < n; i++){
        cout << m[i];
        if(i != n - 1){
            cout << ", ";
        }
    }
    cout << "]" << endl;

}

MyVector::~MyVector(){
    delete[] m;
}

int main(int argc, char** argv){
    int a[6] = {1,2,3,4,5,6};

    MyVector v_1(6, a);
    v_1.print(); 

    MyVector v_2(6, 1);
    v_2.print();

    return 0;
}