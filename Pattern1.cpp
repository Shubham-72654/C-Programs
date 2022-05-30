// input : 5
// output : 5   4   3   2   1

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
            int iCnt = 0;
            for (iCnt = iNo; iCnt > 0; iCnt--)
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