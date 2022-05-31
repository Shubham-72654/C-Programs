// input : 6
// output : 6 + 5 + 4 + 3 + 2 + 1 = 21

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

        int SumOfNumber()
        {
            int iCnt = 0, iSum = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for (iCnt = iNo; iCnt > 0; iCnt--)
            {
                iSum = iSum + iCnt;
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
    iRet = obj.SumOfNumber();

    cout << "Sum of Number is : " << iRet << endl;

    return 0;
}