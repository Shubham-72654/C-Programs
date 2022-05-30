// input : 5
// output : *   *   *   *   *

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
            for (iCnt = iNo; iCnt > 0; iCnt--)
            {
                cout << "*\t";
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