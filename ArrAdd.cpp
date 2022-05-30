// Addition of N Numbers

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iValue)              // Parametrised constructor
        {
            this->iSize = iValue;
            Arr = new int[iSize];       // Allocate the Resource
        }

        ~ArrayX()                       // Destructor
        {
            delete []Arr;               // Deallocate the resource
        }

        void Accept()   // void Accept(ArrayX *this)
        {
            int iCnt = 0;
            cout<<"Enter the elements"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                    cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of array are "<<endl;
            for(iCnt = 0; iCnt< iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        int Summation()
        {
            int iCnt = 0, iSum = 0;
            for (iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{
    int iLen = 0, iRet = 0;

    cout << "Enter the number of elements :";
    cin >> iLen;

    ArrayX obj1(iLen);

    obj1.Accept();      // Accept(&obj1)        Accept(100);
    obj1.Display();     // Display(&obj1)       Display(100);

    iRet = obj1.Summation();
    cout << "Addition is : " << iRet << endl;

    return 0;
}