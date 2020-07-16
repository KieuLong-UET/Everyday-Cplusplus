#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check (int a) {
    bool check;
    if (a >= 1 && a <= 1000) check = true;
    else {
        check = false;
    }
    return check;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum;
    if (check(a) && check(b) && check(c)) {
        sum = a + b + c;
    }   
    cout << sum << endl;
    return 0;
}

