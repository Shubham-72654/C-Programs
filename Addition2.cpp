// Accept number from user and Add them

#include<iostream>
using namespace std;

class Base
{
    protected:
    // Characteristics of class
        int iNo1, iNo2;
    // Behaviours of class
        void Accept();
        void Display(); 
};

class Derived:public Base
{
    public:
        int Addition();
};

void Base::Accept()
{
    cout << "Enter first number : ";
    cin >> this->iNo1;
    cout << "Enter second number : ";
    cin >> this->iNo2;
}

void Base::Display()
{
    cout << "Numbers you entered : " << this->iNo1 << " and " << this->iNo2 << endl;
}  

int Derived::Addition()
{
    int iAns = 0;   // local variable of function

    Accept();
    Display();

    iAns = this->iNo1 + this->iNo2;

    return iAns;
}

// Entry point function
int main()
{
    int iRet = 0;
    Derived obj;

    iRet = obj.Addition();

    cout << "Addition is : " << iRet << endl;

    return 0;
}