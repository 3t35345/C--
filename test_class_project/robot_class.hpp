#include <string>
using namespace std;

class Robot_Class{
    public:
        int id;
        int no_of_wheels;
        string robot_name;

        void move_robot();
        void stop_robot();
};