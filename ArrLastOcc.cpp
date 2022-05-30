// Accept N numbers from user and Accept one another number and find last occurance of that number.

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

        int LastOcc(int iFind)
        {
            int iCnt = 0;
            for (iCnt = (iSize-1); iCnt >= 0; iCnt--)
            {
                if(Arr[iCnt] == iFind)
                {
                    break;
                }
            }
            if(iCnt == iSize)
            {
                return -1;
            }
            else
            {
                return iCnt;
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

    iRet = obj.LastOcc(iSearch);

    if(iRet == -1)
    {
        cout << "There are no such element that you enterrd..." << endl;
    }
    else
    {
        cout << "Last Occurance of element that you entered : " << iRet << endl;
    }

    return 0;
}