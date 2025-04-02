#include <iostream>

using namespace std;

class Account
{
    string name ;
    int id ;
    int balance ;

public :

    // Default constructor
    Account ()
    {
        name = "";
        id = 0 ;
        balance = 0;

    }

    // Parameterized constructor
    Account (int i,string n,  int b)
    {
        name = n ;
        id = i ;
        balance = b;
    }


    // copy constructor
    Account (const Account &a)
    {
        name = a.name;
        id = a.id;
        balance = a.balance;

    }

    //set
    void set_name (string n )
    {
        name = n ;
    }

    void set_id(int i )
    {
        id = i ;
    }

    void set_balance(int b )
    {
        balance = b;
    }


    //get
    string get_name ()
    {
        return name;
    }
    int get_id ()
    {
        return id;
    }
    int get_balance ()
    {
        return balance;
    }

    //methods

    void printInfo ()
    {
        cout<<"Name : " << name << endl;
        cout<<"ID : " << id << endl;
        cout<<"Balance : "<<balance <<endl;
    }

    void TransferTo(Account &a, int num)
    {
        a.set_balance(balance+num);
        set_balance(balance - num);
    }

};

int main()
{
    Account a(1,"name",1000);
    Account b(a);
    a.TransferTo(b,200);
    a.printInfo(); // balance = 800
    b.printInfo(); // balance = 1200
    return 0;
}
