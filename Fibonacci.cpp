// Accept number from user and Display Fibonacci Series
// input :  6
// output : 1   1   2   3   5   8   

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
        void Fibonacci()
        {
            int iCnt = 0, a = 1, b = 0, c = 0;

            for (iCnt = 1; iCnt <= iNo; iCnt++)
            {
                c = a + b;
                cout << c << "\t";
                a = b;
                b = c;
            }
        }
};

int main()
{
    Number obj;
    obj.Accept();
    obj.Display();
    obj.Fibonacci();

    return 0;
}