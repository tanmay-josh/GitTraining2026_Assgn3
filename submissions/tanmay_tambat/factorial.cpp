#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number (0-20): ";
    cin>>n;
    while (n < 0 || n > 20) {
        if (n < 0) {
            cout << "Number cannot be less than zero. Enter again: ";
        } else {
            cout << "Factorial too large to compute using long long."<<endl<<"Enter a number between 0 and 20: ";
        }
        cin >> n;
    }

    long long factorial=1;
    for(int i=n;i>=1;i--){
        factorial*=i;
    }
    cout<<"Factorial of "<<n<<" is "<<factorial<<endl;
}