#include <iostream>
#include <string>
#include "robot_class.hpp"
#include "derived_robot.hpp"


using namespace std;

int main(){
    Robot_Class_Derived robot_1;
    robot_1.id = 1;
    robot_1.no_of_wheels = 4;
    robot_1.robot_name = "Mobile Robot 1";
    cout << "Robot ID = " << robot_1.id << endl;
    cout << "Robot Name = " << robot_1.robot_name << endl;
    robot_1.move_robot();
    robot_1.stop_robot();
    robot_1.turn_left();
    robot_1.turn_right();

    return 0;
}