#include <iostream>

using namespace std;

int main()
{
    int arrSize = 0;
    cout << "Enter size of array: ";
    cin >> arrSize;
    int numberArray[arrSize];
    for (int i = 0;i < arrSize;i++){
        cout << "Enter " << i + 1 << " element :";
        cin >> numberArray[i];
    }
    int searchNumber = 0;
    cout << "What number you want to check : ";
    cin >> searchNumber;
    int numberTrue = 0;
        for (int i = 0;i < arrSize;i++){
            if (numberArray[i] == searchNumber){
                cout << "I know that number!" << endl;
                numberTrue ++;
                break;
            }
        }
    if (numberTrue == 0)
            cout << "I don`t know that number" << endl;
    return 0;
}
