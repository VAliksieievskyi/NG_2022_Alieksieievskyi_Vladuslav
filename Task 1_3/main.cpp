#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your age :" << endl;
    int age = 0;
    cin >> age;
    if(age < 10)
        cout << "Wow, you're already so big!" << endl;
    else{
        cout << "Do you study?(1/0):" << endl;
        int answer = 0;
        cin >> answer;
        if(answer == 0)
            cout << "Why?" << endl;
        else if (answer == 1)
            cout << "You are cool!" << endl;
        else
            cout << "Error" << endl;
        }
    return 0;
}
