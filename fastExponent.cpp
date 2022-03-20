#include<iostream>

using namespace std;

int fastExponent(int num1, int num2) {
    int res = 1;
    // int m = 100000;

    while(num2 > 0) {
        if(num2 % 2 == 1) 
            res = res * num1;

        num1 = num1 * num1;
        num2 = num2 / 2;
    }

    return res;
}

int main() {
    int num1 = 2;
    int num2 = 20;

    cout<<"Result of "<<num1<<" ki power "<<num2<<" is "<<fastExponent(num1, num2);

    return 0;
}
