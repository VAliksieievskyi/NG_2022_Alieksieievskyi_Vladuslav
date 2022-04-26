#include <iostream>

using namespace std;

int main()
{
    cout << "Enter unknown numbers of square equation " << endl;
    int a = 0, b = 0, c = 0;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    float D = 0;
    D =(b*b)-(4*a*c);
    if(D<0)
        cout << endl << "There are no roots" << endl;
    else if(D == 0)
        cout << endl << "There are one root : " << -b/(2*a) << endl;
    else
        cout << endl << "There are two roots : " << (-b+(D/D))/(2*a) <<" and "<< (-b-(D/D))/(2*a) << endl;
    return 0;
}
