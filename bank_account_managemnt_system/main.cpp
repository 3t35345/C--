#include <iostream>
#include <string>
#include <cstdbool>
#include <ctime>
using namespace std;
using std::string;

class user{
    private:
        string username;
        string password;
        string account_id;
        double account_balance;
        double loan_balance;
        bool login_status;
        time_t login_time;
        time_t logout_time;
        time_t login_time_record[100];

    protected:
        // change password
        void change_password(string new_password){
            password = new_password;
        }

        // change username
        void change_username(string new_username){
            username = new_username;
        }

        void change_account_id(string new_account_id){
            account_id = new_account_id;
        }
    public:
        // login

        // borrow money
        void borrow_money(float amount){
            loan_balance += amount;
        }
        // repay money
        void repay_money(float amount){
            if(amount <= loan_balance){
                loan_balance -= amount;
            }else{
                cout << "All loans are repaid. The excess amount would be returned to your bank account." << endl;
                account_balance += (amount - loan_balance);
            }
        }

        // repay loan with bank deposit
        void repay_loan_with_deposit(){
            if(account_balance >= loan_balance){
                account_balance -= loan_balance;
                loan_balance = 0;
            }else{
                cout << "All money in your bank account has been used to repay laon" << endl;
                cout << "You still need to repay " << loan_balance - account_balance << " to the bank." << endl;
                loan_balance -= account_balance;
                account_balance = 0;
            }
        }

        // deposit money
        void deposit(float amount){
            account_balance += amount;
        }
        // withdraw money
        void withdraw(float amount){
            if(amount <= account_balance){
                account_balance -= amount;
            }else{
                cout << "You don't have enough money in your account." << endl;
            }
           
        }
        // check balance
        void check_balance(){
            cout << "Your account balance is: " << account_balance << endl;
        }
        // check loan balance
        void check_loan_balance(){
            cout << "Your loan balance is: " << loan_balance << endl;
        }

};

void GUI(){
    cout << "Welcome to the bank account management system." << endl;
    cout << "Please choose your operation:" << endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "3. Exit" << endl;
    cout << "Your choice: ";
}

int main(){
    int choice = 0;
    bool exit = false;
    while(1){
        GUI();
        cin >> choice;
        switch(choice){
            case 1:
                // login
                cout << "login function is not implemented yet." << endl;
                break;
            case 2:
                // register
                cout << "register function is not implemented yet." << endl;
                break;
            case 3:
                // exit
                cout << "Thank you for using the bank account management system." << endl;
                exit = true;
                break;
            default:
                cout << "Invalid input." << endl;
                break;
        }
        if(exit){
            break;
        }
    }

    return 0;
}