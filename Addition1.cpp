// Accept number from user and Add them

#include<iostream>
using namespace std;

class Add
{
    protected:
        int iNo1, iNo2;

        void Accept()
        {
            cout << "Enter first number : ";
            cin >> this->iNo1;
            cout << "Enter second number : ";
            cin >> this->iNo2;
        }

        void Display()
        {
            cout << "Numbers you entered : " << this->iNo1 << " and " << this->iNo2 << endl;
        }  
};

class Addition:public Add
{
    public:
        int Addition1()
        {
            int iAns = 0;

            Accept();
            Display();

            iAns = this->iNo1 + this->iNo2;

            return iAns;
        }
};

int main()
{
    int iRet = 0;
    Addition obj;

    iRet = obj.Addition1();

    cout << "Addition is : " << iRet << endl;

    return 0;
}