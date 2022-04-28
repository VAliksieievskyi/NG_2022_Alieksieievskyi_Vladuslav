#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your number" << endl;
    long int number = 0,endNumber = 0;
    cin >> number;
    do{
        if ((number % 2) == 0){
           endNumber += (number % 10);
        }
    }while ((number /= 10) > 0);
    cout << "The number was:" << endNumber << endl;
    return 0;
}
