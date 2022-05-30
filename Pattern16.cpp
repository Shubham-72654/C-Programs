// input : iRow = 5 ,  iCol = 5
// output : 
//  
//      0   X   X      
//      X   0   X   
//      X   X   0   
//

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
            if(iRow != iCol)
            {
                cout << "Rows and Columns are not same" << endl;
                return;
            }

            int i = 0, j = 0;

            for (i = 1; i <= iRow; i++)
            {
                for (j = 1; j <= iCol; j++)
                {
                    if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
                    {
                        cout << " \t";
                    }
                    else if(i == j)
                    {
                        cout << "0\t";
                    }
                    else if((i < j) || (j < i))
                    {
                        cout << "X\t";
                    }
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