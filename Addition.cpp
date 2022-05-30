// Accept number from user and Add them

#include<iostream>
using namespace std;

class Add
{
    public:
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

        int Addition()
        {
            return this->iNo1 + this->iNo2;
        }
};

int main()
{
    int iRet = 0;
    Add obj;
    obj.Accept();
    obj.Display();
    iRet = obj.Addition();

    cout << "Addition is : " << iRet << endl;

    return 0;
}