#include <iostream>

using namespace std;

int main(){
    int num1 = 0, num2 = 0;
    std::cout << "Please input 2 numbers" << std::endl;
    std::cin >> num1 >> num2;

    while (num1 >= num2){
        std::cout << "num_1 is: " << num1-- << std::endl;
    }
    return 0;
}