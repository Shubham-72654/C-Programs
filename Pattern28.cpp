// input : iRow = 4 ,  iCol = 4
// output : 
//  
//  -4  -3  -2  -1
//   0   1   2   3
//   4  -4  -3  -2
//  -1   0   1   2

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
            
            iNum = -iRow;

            for (i = 1; i <= iRow; i++)
            {
                for (j = 1; j <= iCol; j++)
                {
                    if(iNum > iRow)
                    {
                        iNum = -iRow;
                    }
                    if(iNum < 0)
                    {
                    cout << iNum << "\t";
                    }
                    else
                    {
                        cout << " " << iNum << " \t";   // for perfect display
                    }
                    iNum++;
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