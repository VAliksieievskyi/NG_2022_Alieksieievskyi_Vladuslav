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
    int discountPercent = 0, discount = 0, pcPrice = 0, allPrice = 0;
    cin >> discountPercent;
    pcPrice = motherboardPrice + videocardPrice + cpuPrice;
    discount = pcPrice / 100 * discountPercent ;
    allPrice = pcPrice - discount;
    cout << "Your PC will cost: " << allPrice<<"$" << endl;
    return 0;
}
