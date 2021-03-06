#include <iostream>
#include <cassert>

using namespace std;

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_magnanimous(int num) {
    int num1=num,dig=0;
    while (num1>0){dig++;num1=num1/10;}
    // dig is the num of digits
    int divisor = 10;
    for (int i=1;i<dig;i++){
        cout << divisor << endl;
        int a=0,b=0;
        num1=num;
        a = num1/divisor;
        b = num1%divisor;
        int sum=a+b;
        if (!is_prime(sum))
            return false;
        divisor *= 10;
    }
    return true;
}




void test_magnanimous() {
    assert(!is_magnanimous(15));  // 15 is not a magnanimous number
    // TODO: Add more test cases
    cout << "Magnanimous number tests passed!" << endl;
}
