// input : 7546
// output : 6   4   5   7

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

        void ReverseDigit()
        {
            int iDigit = 0;
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                cout << iDigit << "\t";
                iNo = iNo / 10;
            }
        }
};

int main()
{
    Reverse obj;
    obj.Accept();
    obj.Display();
    obj.ReverseDigit();

    return 0;
}