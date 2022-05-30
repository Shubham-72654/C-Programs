// Accept N numbers from user and return Smallest number.

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

        int Minimum()
        {
            int iCnt = 0, iMin = Arr[0];
            for (iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(iMin > Arr[iCnt])
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
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

    iRet = obj.Minimum();

    cout << "Smallest element is : " << iRet << endl;

    return 0;
}