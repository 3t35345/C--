#include <iostream>
#include <cmath>
using namespace std;



// class polygon{
//     private:
//         // coordinates of vertexes
//         vector* vertexes;
// };

class vector{
    private:
        // multidimanional vector
        int dim;
        int* coordinates;
    public:
        // initialize a vector
        vector(int, int*);
        // find the length of the vector
        double length();
        // print the vector in the format of <x, y, z>
        void print();
        
};

vector::vector(int dim, int* coordinates){
    this->dim = dim;
    this->coordinates = new int[dim];

    for(int i = 0; i < dim; i++){
        this->coordinates[i] = coordinates[i];
    }
}

double vector::length(){
    double result = 0.0;
    for(int i = 0; i < dim; i++){
        result += coordinates[i] * coordinates[i];
    }
    return sqrt(result);
}

void vector::print(){
    cout << "<";
    for(int i = 0; i < dim; i++){
        cout << coordinates[i];
        if(i != dim - 1){
            cout << ", ";
        }
    }
    cout << ">" << endl;
}

int main(){
    vector v1(4, new int[4]{1,2,3,10});
    v1.print();
    cout << v1.length() << endl;
    return 0;
}
