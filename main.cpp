#include <iostream>

using namespace std;

int factorial(int a){
    int result = 1;
    while (a>1){
        result *= a--;
    }
    return result;
}

void fibonacciSequence(int stopOnIndex){
    int prev = 0;
    int lastPrev = 0;
    int current = 1;
    while(stopOnIndex>0){
        cout<<current<<endl;
        lastPrev = prev;
        prev = current;
        current = lastPrev + prev;
        stopOnIndex--;
    }
}

int arithmProgrSum(int a1, int d, int n){
    int result = 0;
    int currentElement=a1;
    for (int i = n; i > 0; --i) {
        result += currentElement;
        currentElement += d;
        n--;
    }
    return result;
}

int geomProgrSum(int a1, int q, int n){
    int result = 0;
    int currentElement=a1;
    for (int i = n; i > 0; --i) {
        result += currentElement;
        currentElement *= q;
        n--;
    }
    return result;
}

int main() {

    cout<<"factorial: "<<factorial(3)<<endl;
    fibonacciSequence(10);
    cout<<"sum of first 100 natural numbers: "<<arithmProgrSum(1,1,100)<<endl;
    cout<<"geometric progression sum: "<<geomProgrSum(2,3,10)<<endl;
    return 0;

}
