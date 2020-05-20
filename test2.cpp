#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <iostream> 
using namespace std; 
   
int main() 
 { 
    int n;
    cout << "Nhap n:";
    cin >> n;
	int mang[n][n]; 
	for(int j = 0; j < n; j++){
		for(int i = 0; i < n; i++){
			mang[i][j] = 0;
			sleep(50);
		}
	}
    return 0; 
 }
