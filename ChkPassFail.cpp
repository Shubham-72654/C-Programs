// Accept number from user and check Grade
// 0 to 32 = fail
// 33 to 49 = C
// 50 to 59 = B
// 60 to 74 = A
// 75 to 100 = A+

#include<iostream>
using namespace std;

class Number
{
    private:
        int iMarks;

    public:
        void Accept()
        {
            cout << "Enter Your Marks : ";
            cin >> this->iMarks;
        }
        void Display()
        {
            cout << "Your enter Marks is : " << this->iMarks << endl;
        }
        void ChkGrade()
        {
            if((iMarks >= 0) && (iMarks < 33))
            {
                cout << "Fail" << endl;
            }
            else if((iMarks >= 33) && (iMarks < 50))
            {
                cout << "C Grade" << endl;
            }
            else if((iMarks >= 50) && (iMarks < 60))
            {
                cout << "B Grade" << endl;
            }
            else if((iMarks >= 60) && (iMarks < 75))
            {
                cout << "A Grade" << endl;
            }
            else if((iMarks >= 75) && (iMarks <= 100))
            {
                cout << "A+ Grade" << endl;
            }
            else
            {
                cout << "Enter valid Marks...." << endl;
                return;
            }
        } 
};

int main()
{
    Number obj;
    obj.Accept();
    obj.Display();

    obj.ChkGrade();
    
    return 0;
}