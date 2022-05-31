// Accept N numbers from user and add them

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;
    public:
        ArrayX(int iLength)
        {
            this->iSize = iLength;
            Arr = new int[iSize];
        }
        ~ArrayX()
        {
            delete[] Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout << "Enter elements of Array : " << endl ;
            for (iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;
            
            cout << "Elements are : ";
            for (iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout << Arr[iCnt] << "\t";
            }
        }

        int Summation()
        {
            int iCnt = 0, iSum = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{
    int iRet = 0, iLen = 0;

    cout << "enter number of elements : ";
    cin >> iLen;

    ArrayX obj(iLen);
    obj.Accept();
    obj.Display();

    iRet = obj.Summation();
    cout << "\nSummation is : " << iRet << endl;

    return 0;
}