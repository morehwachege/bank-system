#include<iostream>
#include<string>
#include "account.cpp"
#include<fstream>
using namespace std;

// withdraw class
class Withdraw : public AccountDetails{
  public:
    int withdraw_amount;
    void withdraw(){
      cout << acc_balance << endl;
      cout << "Enter amount to withdraw: " << endl;
      cin >> withdraw_amount;
      acc_balance -= withdraw_amount;
      cout << "Your balance is : " << acc_balance << endl;
    }
};
class Deposit : public AccountDetails{
  public:
    int deposit_amount;
    void deposit(){
      cout << acc_balance << endl;
      cout << "Enter amount to deposit: " << endl;
      cin >> deposit_amount;
      acc_balance += deposit_amount;
      cout << "Your balance is: " << acc_balance << endl;
    }
};
int main(){
  Deposit acc_details;
  // acc_details.welcome_message();
  // acc_details.get_details();
  acc_details.checkaccount();
  return 0;
}

