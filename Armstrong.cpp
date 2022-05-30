// Check whether number is armstrong or not
// Armstrong number = 153 => 1^3 + 5^3 + 3^3 = 153
// 370 => 3^3 + 7^3 + 0^3 = 370
// 1634 => 1^4 + 6^4 + 3^4 + 4^4 = 1634

#include<iostream>
using namespace std;

class Base
{
    protected:
    // Characteristics of class
        int iNo;
    // Behaviours of class
        void Accept();
        void Display(); 
};

class Derived:public Base
{
    public:
        bool ChkArmstrong();
};

void Base::Accept()
{
    cout << "Enter number : ";
    cin >> this->iNo;
}

void Base::Display()
{
    cout << "Number you entered : " << this->iNo << endl;
}  

bool Derived::ChkArmstrong()
{
    Accept();
    Display();

    // local variables of function
    int iDigCnt = 0, iDigit = 0, iTemp = 0, iCnt = 0, iProd = 0, iSum = 0;

    iTemp = iNo;
    while(iNo != 0)
    {
        iDigCnt++;
        iNo = iNo / 10;
    }

    iNo = iTemp;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iProd = 1;
        for (iCnt = 1; iCnt <= iDigCnt; iCnt++)
        {
            iProd = iProd * iDigit;
        }
        iSum = iSum + iProd;
        iNo = iNo / 10;
    }

    if(iSum == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Entry point function
int main()
{
    bool bRet = false;
    Derived obj;

    bRet = obj.ChkArmstrong();

    if(bRet == true)
    {
        cout << "Given number is a Armstrong number" << endl;
    }
    else
    {
        cout << "Given number is not a Armstrong number" << endl;
    }

    return 0;
}