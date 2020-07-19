#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a <= b) {
    	for (int i = a; i <= b; i++){
    		if (i <= 9 && i >0) {
    			switch (i) {
				case 1: {
					cout << "one" << endl;
					break;
				}
				case 2: {
					cout << "two" << endl;
					break;
				}
				case 3: {
					cout << "three" << '\n';
					break;
				}
				case 4: {
					cout << "four" << '\n';
					break;
				}
				case 5: {
					cout << "five" << '\n';
					break;
				}
				case 6: {
					cout << "six" << '\n';
					break;
				}
				case 7: {
					cout << "seven" << '\n';
					break;
				}
				case 8: {
					cout << "eight" << '\n';
					break;
				}
				case 9: {
					cout << "nine" << '\n';
					break;
				}
				}
    		
			} else {
				if	(i > 0) {
					if (i % 2) cout << "odd" << '\n';
					else cout << "even" << '\n';
				}
			}
		}
	}
    return 0;
}
