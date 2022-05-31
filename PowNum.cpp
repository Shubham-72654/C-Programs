// Input  :   2     4
// output :   16

#include<iostream>
using namespace std;

class Power
{
    private:
        int iNo;
        int iPower;
    
    public:
        void Accept()
        {
            cout << "Enter the number : ";
            cin >> this->iNo;

            cout << "Enter the power of number : ";
            cin >> this->iPower;
        }

        void Display()
        {
            cout << "Number is : " << this->iNo << " , and Power of number is : " << this->iPower << endl ;
        }

        int PowerNumber()
        {
            int iCnt = 0, iMult = 1;
            for (iCnt = 1; iCnt <= iPower; iCnt++)
            {
                iMult = iMult * iNo;
            }
            return iMult;
        }
};

int main()
{
    int iRet = 0;

    Power obj;
    obj.Accept();
    obj.Display();

    iRet = obj.PowerNumber();
    cout << "Answer is : " << iRet << endl;

    return 0;
}