#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number (0-20): ";
    cin >> n;

    while (true) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter an integer between 0 and 20: ";
            cin >> n;
            continue;
        }
        if (n < 0) {
            cout << "Number cannot be less than zero. Enter again: ";
        } else if (n > 20) {
            cout << "Factorial too large to compute using long long.\nEnter a number between 0 and 20: ";
        } else {
            break;
        }

        cin >> n;
    }

    long long factorial=1;
    for(int i=n;i>=1;i--){
        factorial*=i;
    }
    cout<<"Factorial of "<<n<<" is "<<factorial<<endl;
}