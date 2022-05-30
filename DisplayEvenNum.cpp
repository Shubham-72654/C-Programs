// Display even numbers

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
        void DisplayEvenNum()
        {
            int iCnt = 0;
            for (iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if(iCnt % 2 == 0)
                {
                    cout << iCnt << "\t";
                }
            }
        }
};

int main()
{
    Number obj;
    obj.Accept();
    obj.Display();
    obj.DisplayEvenNum();

    return 0;
}