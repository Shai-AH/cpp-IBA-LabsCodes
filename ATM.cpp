#include <iostream>
using namespace std;
int main(){
    double balance = 999.0, witam, depom;
    int option;
    cout << "Your Current Balance is " << balance << endl; 
    cout << "Enter Option 1 = Deposit or 0 = Withdraw: " << endl;
    cin >> option;
    if(option == 1){
        cout << "Enter Amount to Deposit" << endl; 
        cin >> depom;
        balance = balance + depom;
        cout << "Your New Balance: " << balance << endl;
    }
    if(option == 0){
        cout << "Enter Amount to Withdraw" << endl;
        cout << "Current Balance is: " << balance << endl;
        cin >> witam;
        if(witam<=balance){
            balance = balance - witam;
            cout << "Your New Balance: " << balance << endl;
        }
        else{
            cout << "In-Sufficient Balance" << endl;
        }
    }
    else{
        cout << "Enter Valid Number 1-0" << endl;
    }
    }
