// input : iRow = 4 ,  iCol = 4
// output : 
//  
//   1  2   3   4
//   5  6   7   8
//   9  1   2   3
//   4  5   6   7

#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;

    public:
        void Accept()
        {
            cout << "Enter number of Rows : ";
            cin >> this->iRow;

            cout << "Enter number of Columns: ";
            cin >> this->iCol;
        }

        void Display()
        {
            cout << "\nYou entered Rows : " << this->iRow << " and Columns : " << this->iCol << endl;
        }

        void DisplayPattern()
        {
            int i = 0, j = 0, iNum = 0;

            for (i = iRow; i > 0; i--)
            {
                for (j = 1; j <= iCol; j++)
                {
                    iNum++;
                    if(iNum > 9)
                    {
                        iNum = 1;
                    }
                    cout << iNum << "\t";
                }
                cout << endl;
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