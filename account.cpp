#include<iostream>
#include<string>
#include<fstream>
using namespace std;


class AccountDetails{
  public:
    string first_name, second_name;
    int option;
    bool account_holder = false;
  // protected:
    long int card_no;
    float acc_balance = 32323.24;
        // void create_account(){

        // }
        void welcome_message(){
          cout << "-----------------Welcome to Browing Bank System----------------------" <<endl;
          cout<<"               1. Create Account" <<endl;
          // cout<<"               1. Login" <<endl;
          cout<<"               2. My Account" <<endl;
          cout<<"               3. Help" <<endl;
          cout<<"               0. Exit" <<endl;
          cin >> option;
        }
        void my_account(){
          cout << "-----------------Welcome to Browing Bank System----------------------" <<endl;
          cout<<"           --------Personal Account Details----------" <<endl;
          cout<<"                   1. Balance" <<endl;
          cout<<"                   2. Deposit" <<endl;
          cout<<"                   3. Withdraw" <<endl;
          cout<<"                   4. Help" <<endl;
          cout<<"                   0. Exit" <<endl;
          cin >> option;
        }
        void print_acc_details(){
        cout <<"Name: " <<  first_name << " " << second_name << endl;
        cout << "Card No: " <<  card_no << endl;
        if( acc_balance > 0){
        cout << "Account Balance: " << acc_balance << endl;
        }
    }
      void get_details(){
        ofstream full_name_file;
        ofstream card_no_file;
        full_name_file.open("full_name_file.csv");
        card_no_file.open("card_no_file.csv");

        while (option == 1){

        cout << "               Enter First Name: " << endl;
        cin >> first_name;
        cout << "               Enter Second Name: " << endl;
        cin >> second_name;
        cout << "               Enter Card Number: "<< endl;
        cin >> card_no;
        card_no_file << card_no;
        string full_name = first_name + " " + second_name;
        full_name_file << full_name <<endl;
        welcome_message();
        }
        // my account secondary menu

        if (option == 2){
            checkaccount();
          while (account_holder == true){
            my_account();
          }
        }


        if(option == 0){
          cout << "               Are your sure you want to exit ?"<<endl;
          int yes_no;
          cout<<"1. Yes"<<endl;
          cout<<"2. No"<<endl;
          cin >> yes_no;
          if(yes_no == 2){
            welcome_message();
            get_details();
          }
          else if(yes_no == 1){
            exit (0);
          }
          else{
            welcome_message();
            get_details();
          }

        }
        full_name_file.close();
        card_no_file.close();
}
        void checkaccount(){
          string full_name;
          ifstream full_name_file;
          ifstream card_no_file;
          string check_first_name, check_second_name;
          string check_name = check_first_name + check_second_name;
          string check_card;
          cout << "Please Enter Your Full Name(2) each at a time "<<endl;
          cin >> check_first_name;
          cin>>check_second_name;
          int count = 0 ;
          // cout << "Please Enter Your Card Number "<<endl;
          // cin >> check_card;
          full_name_file.open("full_name_file.csv");
          card_no_file.open("card_no_file.csv");

          while(full_name_file){
            count += 1;
            getline(full_name_file, full_name);
            if (check_name == full_name){
              cout<<"You have an account with us"<<endl;
              account_holder = true;
            }
            else{
              cout<<"You do not belong here"<<endl;
              account_holder = false;
            }
            
          cout << count<<endl;
          }

          full_name_file.close();
          card_no_file.close();

        }
};

// class CheckAccount{

// }
// todo
// check for account and account balance and transactions
// set accounts and details as 2D arrays