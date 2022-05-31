// 1 Packet : Your Billing Amount is 200 rs.
// 2 Packet : Your Billing Amount is 380 rs.
// 5 Packet : Your Billing Amount is 850 rs.
// 10 Packet : Your Billing Amount is 1500 rs.
// 15 Packet : Your Billing Amount is 1800 rs.

#include<iostream>
using namespace std;

class Bill
{
    private:
        int iNo;
    
    public:
        void Accept()
        {
            cout << "Choose quantities of packet that you want to purchase : " << endl;
            cout << "1 : 1 Packet" << endl;
            cout << "2 : 2 Packets" << endl;
            cout << "3 : 5 Packets" << endl;
            cout << "4 : 10 Packets" << endl;
            cout << "5 : 15 Packets" << endl;
            cout << "Choose : ";
            cin >> this->iNo;
        }

        void Display()
        {
            if(iNo <= 1)
            {
                cout << "You choosed " << this->iNo << " packet" << endl;
            }
            else
            {
                cout << "You choosed " << this->iNo << " packets" << endl;
            }
        }

        void DisplayBill()
        {
            switch (iNo)
            {
            case 1:
                cout << "Your Billing Amount is 200rs." << endl;
                break;
            case 2:
                cout << "Your Billing Amount is 380rs." << endl;
                break;
            case 3:
                cout << "Your Billing Amount is 850rs." << endl;
                break;
            case 4:
                cout << "Your Billing Amount is 1500rs." << endl;
                break;
            case 5:
                cout << "Your Billing Amount is 1800rs." << endl;
                break;
            default:
                cout << "Enter Valid Quantity." << endl;
            }
            cout << "Thanks For Visit....Please Visit Again!" << endl;
        }
};

int main()
{
    Bill obj;
    obj.Accept();
    obj.Display();
    obj.DisplayBill();

    return 0;
}