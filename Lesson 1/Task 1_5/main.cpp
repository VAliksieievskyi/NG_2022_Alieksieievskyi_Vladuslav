#include <iostream>

using namespace std;

int main()
{
    cout << "Enter unknown numbers of square equation " << endl;
    int numberA = 0, numberB = 0, numbreC = 0;
    cout << "Enter a:";
    cin >> numberA;
    cout << "Enter b:";
    cin >> numberB;
    cout << "Enter c:";
    cin >> numbreC;
    float discriminant = 0;
    discriminant =(numberB*numberB)-(4*numberA*numbreC);
    if(discriminant<0)
        cout << endl << "There are no roots" << endl;
    else if(discriminant == 0)
        cout << endl << "There are one root : " << -numberB/(2*numberA) << endl;
    else
        cout << endl << "There are two roots : " << (-numberB+(discriminant/discriminant))/(2*numberA) <<" and "<< (-numberB-(discriminant/discriminant))/(2*numberA) << endl;
    return 0;
}
