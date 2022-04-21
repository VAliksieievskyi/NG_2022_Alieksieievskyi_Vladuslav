#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your price of Motherboard, Videocard and CPU :($)" << endl;
    int motherboardPrice = 0, videocardPrice = 0, cpuPrice = 0;
    cout << "Motherboard: " ;
    cin >> motherboardPrice;
    cout << "Videocard: " ;
    cin >> videocardPrice;
    cout << "CPU: ";
    cin >> cpuPrice;
    cout << "Enter your discount:(%) " ;
    int discount = 0;
    cin >> discount;
    cout << "Your PC will cost: " << motherboardPrice + videocardPrice + cpuPrice - ((motherboardPrice + videocardPrice + cpuPrice) / 100 * discount)<<"$" << endl;
    return 0;
}
