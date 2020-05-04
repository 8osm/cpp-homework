#include <iostream>

using namespace std;

int factorial(int n) {
    if (n > 0) {
        return n * factorial((n - 1));
    } else {
        return 1;
    }
}

int fibonacci(int n) {
    if (n < 0) return 0;

    switch(n){
        case 0:
            return 0;
        case 1:
            return 1;
        default:
            return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    cout << factorial(7) << endl;
    for (int i = 0; i < 15; ++i) {
        cout << fibonacci(i) << endl;
    }


}
