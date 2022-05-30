// input : 5
// output : A   B   C   D   E

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
            char ch = '\0';

            for (iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
            {
                cout << ch << "\t";
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