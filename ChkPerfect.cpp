// Accept number from user and check whether given number is Perfect or not
// 6   =    1 + 2 + 3 => 6
// 28  =   1 + 2 + 4 + 7 + 14 => 28
// 496, 8128, 33550336

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
        void CheckPerfect()
        {
            int iCnt = 0, iSum = 0;

            for (iCnt = 1; ((iCnt <= (iNo / 2)) && (iSum <= iNo / 2)); iCnt++)
            {
                if (iNo % iCnt == 0)
                {
                    iSum = iSum + iCnt;
                }
            }

            if(iNo == iSum)
            {
                cout << iNo << " is a perfect number" << endl;
            }
            else
            {
                cout << iNo << " is not a perfect number" << endl;
            }
        } 
};

int main()
{
    Number obj;
    obj.Accept();
    obj.Display();

    obj.CheckPerfect();
    
    return 0;
}