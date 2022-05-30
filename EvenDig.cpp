// Display Even digit of a number
// input :  54682147
// output : 4   2   8   6   4

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;
    
    public:
        void Accept()
        {
            cout << "Enter number : ";
            cin >> this->iNo;
        }
        void Display()
        {
            cout << "Your enter number is : " << this->iNo << endl;
        }
        void DisplayEvenDigit()
        {
            int iDigit = 0;
            cout << "Even Digits from " << iNo << " are : " << endl;
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit % 2 == 0)
                {
                    cout << iDigit << "\t";
                }
                iNo = iNo / 10;
            }
        }
};

int main()
{
    Number obj;
    obj.Accept();
    obj.Display();
    obj.DisplayEvenDigit();

    return 0;
}