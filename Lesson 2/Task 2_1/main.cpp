#include <iostream>

using namespace std;

int main()
{
    cout << "Enter size of square:" << endl;
    int sizeOfSquare = 0;
    cin >> sizeOfSquare;
    for (int i = 0; i < sizeOfSquare; i++){
        for (int j = 1; j < sizeOfSquare; j++){
            if (i == 0 || i == sizeOfSquare - 1)
                cout << "*";
            else{
                if (j == 0 || j == 1)
                    cout << "*";
                else
                    cout << " ";
            }

        }
    cout << "*" << endl;
    }
    return 0;
}
