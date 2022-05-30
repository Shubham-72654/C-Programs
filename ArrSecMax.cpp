// Accept N numbers from user and return Second Largest number.

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iLen)
        {
            this->iSize = iLen;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete[] Arr;
        }

        void Accept()
        {
            int iCnt = 0;
            cout << "Enter Elements of Array : " << endl;
            for (iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;
            cout << "Elements are : " << endl;
            for (iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout << "|" << Arr[iCnt] << "|-> ";
            }
            cout << "NULL" << endl;
        }

        int SecondMaximum()
        {
            int iCnt = 0, j = 0, iMax = Arr[0], iMax2 = 0;
            for (iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(iMax < Arr[iCnt])
                {
                    iMax = Arr[iCnt];
                }
            }
            for (j = 0; j < iSize; j++)
            {
                if((Arr[j] > iMax2) && (Arr[j] < iMax))
                {
                    iMax2 = Arr[j];
                }
            }
            return iMax2;
        }
};

int main()
{
    int iLength = 0, iRet = 0;

    cout << "Enter number of elements : ";
    cin >> iLength;

    ArrayX obj(iLength);
    obj.Accept();
    obj.Display();

    iRet = obj.SecondMaximum();

    cout << "Second Largest element is : " << iRet << endl;

    return 0;
}