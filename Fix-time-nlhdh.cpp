#include <iostream>
#include <time.h>
#include <cstdio>
#include <string>
using namespace std;

int main()
{

    int n;
    cout << "Nhap n: " ;
    cin >> n;
    int data[n][n];
	
    cout << "TH1: voi cach duyet cot truoc, hang sau\n" << endl;

    double st1 = clock();
    cout << "Bat dau:" << st1 << endl ;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            data[i][j] = 0;
        }
    }
    double t1 = clock(); 
	double delt1= t1 - st1;
    cout << "Thoi gian thuc thi doan code tren la: " << delt1 << endl;

    cout << "TH2: Voi cach duyet hang truoc, cot sau \n" << endl;
    double st2 = clock();
    cout << "Bat dau lan 2: " << st2 << endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            data[i][j] = 0;
        }
    }
    double t2 = clock();
	double delt2= t2 - st2;
    cout << "Thoi gian thuc thi doan code thu 2 la: " << delt2 ;

    return 0;

}
