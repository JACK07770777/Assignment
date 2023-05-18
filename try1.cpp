#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Bank {
private:
    string bank_name;
    string bank_address;
    vector<string> atm_location;
    map<string, pair<string, double>> account_holders; // account_no -> {pin, balance}

public:
    Bank(string name, string address, vector<string> atm) {
        bank_name = name;
        bank_address = address;
        atm_location = atm;
    }

    void add_account_holder(string name, string account_no, string pin, double balance) {
        account_holders[account_no] = {pin, balance};
        cout << "Account holder " << name << " with account no " << account_no << " added successfully." << endl;
    }

    void remove_account_holder(string account_no) {
        account_holders.erase(account_no);
        cout << "Account holder with account no " << account_no << " removed successfully." << endl;
    }

    void get_account_info(string account_no, stringpin) {
        if (account_holders.find(account_no) != account_holders.end()) {
            if (account_holders[account_no].first == pin) {
                cout << "Account holder name: " << account_holders[account_no].second << endl;
                cout << "Account balance: " << account_holders[account_no].second << endl;
            }
            else {
                cout << "Incorrect pin." << endl;
            }
        }
        else {
            cout << "Account not found." << endl;
        }
    }

    void get_bank_info() {
        cout << "Bank name: " << bank_name << endl;
        cout << "Bank address: " << bank_address << endl;
        cout << "ATM Locations: " << endl;
        for (string location : atm_location) {
            cout << "- " << location << endl;
        }
    }
};

int main() {
    Bank bank("ABC Bank", "123 Main St, Anytown USA", {"Main St ATM", "Downtown ATM"});
    bank.add_account_holder("John Doe", "123456", "9876", 1000.0);
    bank.add_account_holder("Jane Doe", "789012", "5432",5000.0);




    bank.get_bank_info();
    bank.get_account_info("123456", "9876");
    bank.get_account_info("789012", "1234");
    bank.remove_account_holder("789012");
    bank.get_account_info("789012", "5432");

    return 0;
}
