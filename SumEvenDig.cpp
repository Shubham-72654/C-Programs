// input : 7546
// output : 6 + 4 = 10

#include<iostream>
using namespace std;

class Reverse
{
    private:
        int iNo;
    
    public:
        void Accept()
        {
            cout << "Enter The Number : ";
            cin >> iNo;
        }

        void Display()
        {
            cout << "Number is : " << iNo << endl;
        }

        int SumEvenDigit()
        {
            int iDigit = 0, iSum = 0;
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit % 2 == 0)
                {
                    iSum = iSum + iDigit;
                }
                iNo = iNo / 10;
            }
            return iSum;
        }
};

int main()
{
    int iRet = 0;

    Reverse obj;
    obj.Accept();
    obj.Display();
    iRet = obj.SumEvenDigit();

    cout << "Sum of Even Digit is : " << iRet << endl;

    return 0;
}