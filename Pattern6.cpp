// input : 5
// output : -5   -4   -3   -2   -1  0   1   2   3   4   5

#include<iostream>
using namespace std;

class Pattern
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
            cout << "you entered : " << this->iNo << endl;
        }

        void DisplayPattern()
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            int iCnt = 0;
            char ch = '\0', sh = '\0';

            for (iCnt = -iNo; iCnt <= iNo; iCnt++)
            {
                cout << iCnt << "\t";
            }
        }
};

int main()
{
    Pattern obj;
    obj.Accept();
    obj.Display();
    obj.DisplayPattern();

    return 0;
}