// Accept number from user and return count of digit

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
        int DigitCount()
        {
            int iDigCnt = 0;
            while(iNo != 0)
            {
                iDigCnt++;
                iNo = iNo / 10;
            }

            return iDigCnt;
        } 
};

int main()
{
    int iRet = 0;

    Number obj;
    obj.Accept();
    obj.Display();

    iRet = obj.DigitCount();

    cout << "Number of Digit is : " << iRet << endl;

    return 0;
}