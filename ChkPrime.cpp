// Accept number from user and check whether given number is Perfect or not
// 7, 11, 17, 23, 29 etc

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
        bool CheckPrime()
        {
            int iCnt = 0, iSum = 0;

            for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
            {
                if (iNo % iCnt == 0)
                {
                    break;
                }
            }
            if(iCnt > (iNo / 2))
            {
                return true;
            }
            else
            {
                return false;
            }
        } 
};

int main()
{
    bool bRet = false;

    Number obj;
    obj.Accept();
    obj.Display();

    bRet = obj.CheckPrime();

    if(bRet == true)
    {
        cout << "Given number is Prime number" << endl;
    }
    else
    {
        cout << "Given number is not a Prime number" << endl;
    }
    
    return 0;
}