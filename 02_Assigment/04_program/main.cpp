// To find GCD using recursion. 
#include <iostream>//header file
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {//base case
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int result = gcd(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

