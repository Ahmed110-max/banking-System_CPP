#include <iostream>
#include<map>
using namespace std;
#define MIN_BALANCE                                 500



class Account
{
private:
    int Account_Number;
    string First_Name;
    string Last_Name;
    float Current_Balance;
   static int NextAccNo;

public:
    Account() {};
    Account(string F_Name, string L_Name,float balance);
    void Deposit_money(float amount);
    void Withdraw_money(float amount);
    float Check_balance();
    int GetAccNo();
    string GetFirst_Name();
    string GetLast_Name();

    
};


class Bank
{
private:
    map<int,Account> accounts;
public:
    void Open_Account(string F_Name, string L_Name, float balance);
    Account Balance_Enquiry(int AccNo);
    Account Deposit(int AccNo, float amount);
    Account Withdraw(int AccNo, float amount);
    void Close_Account(int AccNo);
    void Show_All_Accounts();
};

ostream& operator <<(ostream& out, Account acc);

int main()
{

    Bank BanqueMisr;
    Account acc;
    string F_Name;
    string L_Name;
    float balance;
    int User_Service=0;
    int Acc_no;
    while (User_Service!=7)
    {
        cout << "Choose you Service : " << endl;
        cout << "1: Open Account " << endl;
        cout << "2: Balance Enquiry " << endl;
        cout << "3: Deposit " << endl;
        cout << "4: Withdraw " << endl;
        cout << "5: Close_Account " << endl;
        cout << "6: Show All Accounts " << endl;
        cout << "7: quit " << endl;
        cin >> User_Service;

        switch (User_Service)
        {
        case 1:
            cout << "Enter Your First Name : " << endl;
            cin >> F_Name;
            cout << "Enter Your Last Name : " << endl;
            cin >> L_Name;
            cout << "Put your Balance in the ATM : " << endl;
            cin >> balance;
            BanqueMisr.Open_Account(F_Name, L_Name, balance);
            break;
        case 2:
            cout << "Enter Your Account Number : " << endl;
            cin >> Acc_no;
            cout << BanqueMisr.Balance_Enquiry(Acc_no);
            break;
        case 3:
            cout << "Enter Your Account Number : " << endl;
            cin >> Acc_no;
            cout << "Put your money in the ATM : " << endl;
            cin >> balance;
            acc = BanqueMisr.Deposit(Acc_no, balance);
            cout << "Amount is Deposited " << endl;
            cout << acc;
            break;
        case 4:
            cout << "Enter Your Account Number : " << endl;
            cin >> Acc_no;
            cout << "Enter Amount : " << endl;
            cin >> balance;
            acc = BanqueMisr.Withdraw(Acc_no, balance);
            cout << acc;
            break;
        case 5:
            cout << "Enter Your Account Number : " << endl;
            cin >> Acc_no;
            BanqueMisr.Close_Account(Acc_no);
        case 6:
            BanqueMisr.Show_All_Accounts();
            break;
        case 7:
            cout << "thanks" << endl;
            break;
        }
    }
        

}





int Account::NextAccNo = 0;



  Account::Account(string F_Name, string L_Name, float balance)
{
    NextAccNo++;
    Account_Number = NextAccNo;
    First_Name = F_Name;
    Last_Name = L_Name;
    Current_Balance = balance;
}




void  Account::Deposit_money(float amount)
{
    Current_Balance += amount;

}




void  Account::Withdraw_money(float amount)
{
    try
    {
        if (Current_Balance - amount > MIN_BALANCE)
        {
            Current_Balance -= amount;
            cout << "Amount is Withdrawed " << endl;
        }
        else
        {
            throw "bank account must always maintain a minimum balance of 500.";
        }
    }
    catch (...)
    {
        cout << "Cant Withdraw , balance must Remain more than 500 "<<endl;
    }

}



float Account::Check_balance()
{
    return Current_Balance;
} 



int Account::GetAccNo()
{
    return NextAccNo;
}


string Account::GetFirst_Name()
{
    return First_Name;
}


string Account::GetLast_Name()
{
    return Last_Name;
}




void Bank::Open_Account(string F_Name, string L_Name, float balance)
{
    Account account(F_Name, L_Name, balance);
    accounts.insert({ account.GetAccNo() ,account });
    cout << "Account Created "<<endl << account <<endl;
}



Account Bank::Balance_Enquiry(int AccNo)
{
    map<int, Account>::iterator itr = accounts.find(AccNo);
    return itr->second;
}



Account Bank::Deposit(int AccNo,float amount)
{
    map<int, Account>::iterator itr = accounts.find(AccNo);
    itr->second.Deposit_money(amount);
    return itr->second;
}



Account Bank::Withdraw(int AccNo, float amount)
{
    map<int, Account>::iterator itr = accounts.find(AccNo);
    itr->second.Withdraw_money(amount);
    return itr->second;
}


void Bank::Close_Account(int AccNo)
{
    map<int, Account>::iterator itr = accounts.find(AccNo);
    accounts.erase(itr);
    cout << "Account is Closed" << endl;
}


void Bank::Show_All_Accounts()
{
    map<int, Account>::iterator itr;
    for (itr = accounts.begin(); itr != accounts.end(); itr++)
    {
        cout << "Account" << itr->second;
    }
}


ostream& operator <<(ostream& out, Account acc)
{
    out << "First Name : " << acc.GetFirst_Name() << endl << "Last Name: " << acc.GetLast_Name()
        << endl << "Account number: " << acc.GetAccNo() << endl << "Balance : " << acc.Check_balance()<<endl;
    return out;
}


