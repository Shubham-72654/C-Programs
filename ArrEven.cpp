// Accept N numbers from user and Display even elements.

#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;
        int iSize;
    public:
        Array(int iValue)
        {
            this->iSize = iValue;
            Arr = new int[iSize];
        }

        ~Array()
        {
            delete[] Arr;
        }

        void Accept()
        {
            int iCnt = 0;
            cout << "Enter the elements : " << endl;
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
                cout << Arr[iCnt] << "\t";
            }
        }

        void DisplayEven()
        {
            Accept();
            Display();
            int iCnt = 0;
            cout << "\nEven elements are : " << endl;

            for (iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    cout << Arr[iCnt] << "\t";
                }
            }
        }
};

int main()
{
    int iLen = 0;

    cout << "Enter number of elements : ";
    cin >> iLen;

    Array obj(iLen);
    
    obj.DisplayEven();

    return 0;
}