// input : iRow = 4 ,  iCol = 4
// output : 
//  
//    *   *   *   *
//    *   *   *
//    *   *
//    *   
//    *   *
//    *   *   *
//    *   *   *   *



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

            for (i = iRow; i > 0; i--)
            {
                for (j = 1; j <= i; j++)
                {
                    cout << "*\t";
                }
                cout << endl;
            }
            for (i = 2; i <= iRow; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    cout << "*\t";
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