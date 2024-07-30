#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

struct Point{
    int x;
    int y;
    int z;
};
typedef Point Vector;


Vector vector(Point X_1, Point X_2);
int dot_product(Vector X_1, Vector X_2);
Vector cross_product(Vector Vector_1, Vector Vector_2);
Vector reflect_vector(Vector target_vector, Vector axis_vector);

int main(){
    // Point X_1 = {3,4,8};
    // Point X_2 = {5,6,7};
    // Point Vector_12 = vector(X_1, X_2);
    // cout << Vector_12.x << endl;
    // cout << Vector_12.y << endl;
    // cout << Vector_12.z << endl;

    // Point v1 = {1, 6, -8};
    // Point v2 = {4, -2, -1};
    // Point v3 = cross_product(v1, v2);
    // cout << &v3 << endl;
    // cout << &v3.x << endl;
    // cout << &v3.y << endl;
    // cout << &v3.z << endl;

    Vector v1 = {1, 6, -8};
    Vector v2 = {0, 0, 2};
    Vector v3 = reflect_vector(v1, v2);
    cout << v3.x << " " << v3.y << " " << v3.z << endl;
    return 0;
}

Vector vector(Point X_1, Point X_2){
    Vector X_3 = {X_2.x - X_1.x, X_2.y - X_1.y, X_2.z - X_1.z};
    return X_3;
}

int dot_product(Vector X_1, Vector X_2){
    int dot_product = X_1.x * X_2.x + X_1.y * X_2.y + X_1.z * X_2.z;
    return dot_product;
}

Vector cross_product(Vector Vector_1, Vector Vector_2){
    Vector Vector_3 = {Vector_1.y * Vector_2.z - Vector_1.z * Vector_2.y, 
                      Vector_1.z * Vector_2.x - Vector_1.x * Vector_2.z, 
                      Vector_1.x * Vector_2.y - Vector_1.y * Vector_2.x};
    return Vector_3;
}

Vector reflect_vector(Vector target_vector, Vector axis_vector){
    //reflected_vector is the vector that is reflected from target_vector to axis_vector
    //reflected_vector = target_vector - 2 * (target_vector dot axis_vector) * axis_vector
    Vector reflected_vector = {target_vector.x - 2 * dot_product(target_vector, axis_vector) * axis_vector.x,
                              target_vector.y - 2 * dot_product(target_vector, axis_vector) * axis_vector.y,
                              target_vector.z - 2 * dot_product(target_vector, axis_vector) * axis_vector.z};
    
    return reflected_vector;
}