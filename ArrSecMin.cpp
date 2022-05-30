// Accept N numbers from user and return Second Smallest number.

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

        int SecondMinimum()
        {
            int iCnt = 0, j = 0, iMin = 0, iMin2 = 0;

            if(Arr[0] < Arr[1])
            {
                iMin = Arr[0];
                iMin2 = Arr[1];
            }
            else
            {
                iMin = Arr[1];
                iMin2 = Arr[0];
            }
            
            for(iCnt = 2; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin2 = iMin;
                    iMin = Arr[iCnt];
                }
                else if(Arr[iCnt] < iMin2)
                {
                    iMin2 = Arr[iCnt];
                }
            }
            return iMin2;
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

    iRet = obj.SecondMinimum();

    cout << "Second Smallest element is : " << iRet << endl;

    return 0;
}