// Accept number from user and check whether given number is Palindrome or no
// input :  13231,  58485, 121, 9426249
// output : It is palindrome

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;

    public:
        void Accept()
        {
            cout << "Enter the number : ";
            cin >> this->iNo;
        }
        void Display()
        {
            cout << "Your enter number is : " << this->iNo << endl;
        }
        void ChkPalindrome()
        {
            int iDigit = 0, iSum = 0, iTemp = 0;

            iTemp = iNo;
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum * 10 + iDigit;
                iNo = iNo / 10;
            }

            iNo = iTemp;
            if(iNo == iSum)
            {
                cout << iNo << " is a Palindrome number" << endl;
            }
            else
            {
                cout << iNo << " is not a Palindrome number" << endl;
            }
        } 
};

int main()
{
    Number obj;
    obj.Accept();
    obj.Display();

    obj.ChkPalindrome();
    
    return 0;
}