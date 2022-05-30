// Accept N numbers from user and Accept one another number and find frequecy of that number.

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

        int Frequency(int iFind)
        {
            int iCnt = 0, iFreq = 0;
            for (iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iFind)
                {
                    iFreq++;
                }
            }
            if(iFreq != 0)
            {
                return iFreq;
            }
            else
            {
                return -1;
            }
        }
};

int main()
{
    int iLength = 0, iRet = 0, iSearch = 0;

    cout << "Enter number of elements : ";
    cin >> iLength;

    ArrayX obj(iLength);
    obj.Accept();
    obj.Display();

    cout << "Enter element to check first occurance : ";
    cin >> iSearch;

    iRet = obj.Frequency(iSearch);

    if(iRet == -1)
    {
        cout << "There are no such element that you enterrd..." << endl;
    }
    else
    {
        cout << "Frequency of element that you entered : " << iRet << endl;
    }

    return 0;
}