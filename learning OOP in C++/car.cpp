#include <iostream>
using namespace std;

// building a Class for car
class Abstract_Car{
    virtual void Ask_for_price() = 0;
};

class Car:Abstract_Car{
    private:
        string brand;
        string model;
        int year;
        float price;
        string color;
    
    // private:
    //     string owner;
    //     string production_id;
    
    public:
        void introduce_the_car(){
            cout << "This is a " << brand << " " << model << " " << year << " " << color << " car." << endl;
        }

        Car(string Name, string Model, int Year, string Color){ // initialize the car
            brand = Name;
            model = Model;
            year = Year;
            color = Color;
        }

        void set_price(float Price){
            price = Price;
        }

        void get_price(){
            cout << "The price of this car is " << price << endl;
        }

        void set_color(string Color){
            color = Color;
        }

        void get_color(){
            cout << "The color of this car is " << color << endl;
        }
        void Ask_for_price(){
            cout << "The price of this car is " << price << endl;
        }

};


int main(){
    Car myCar = Car("BMW", "X5", 2020, "Black");
    // myCar.owner = "Andy Li"; // this line will cause error
    for(int i = 0; i < 5; i++){
        myCar.introduce_the_car();
    }
    return 0;

}