// Accept number from user and check whether given number is even or odd

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;

    public:
        void Accept()
        {
            cout << "Enter the number : ";
            cin >> this->iNo;
        }
        void Display()
        {
            cout << "Your enter number is : " << this->iNo << endl;
        }
        void ChkEven()
        {
            if(iNo % 2 == 0)
            {
                cout << this->iNo << " is Even number " << endl;
            }
            else
            {
                cout << this->iNo << " is Odd number" << endl;
            }
        } 
};

int main()
{
    Number obj;
    obj.Accept();
    obj.Display();

    obj.ChkEven();
    
    return 0;
}