// Display elements of Array

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr, iSize;
    public:
        ArrayX(int);
        void Accept();
        void Display();
};

ArrayX::ArrayX(int iLength)
{
    this->iSize = iLength;
    Arr = new int[iSize];
}

void ArrayX::Accept()
{
    int iCnt = 0;

    cout << "Enter the elements : " << endl;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

void ArrayX::Display()
{
    int iCnt = 0;

    cout << "Elements of Array are : " << endl;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }
}

int main()
{
    int iLen = 0;

    cout << "Enter size of array : ";
    cin >> iLen;

    ArrayX obj(iLen);
    obj.Accept();
    obj.Display();

    return 0;
}