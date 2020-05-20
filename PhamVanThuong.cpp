#include "iostream"
#include <time.h>
#include <cstdio>
#include <string>
using namespace std;

int main()
{

    const int n = 1000;
    bool data[n][n];

    cout << "TH1: voi cach duyet cot truoc, hang sau\n" <<endl<<

         "for (j = 0; j <" << n <<"; j++)\n"
         "for (i = 0; i <"<< n <<"; i++)\n"
         "data[i,j] = 0;\n";
    cout << "Thoi gian thuc thi doan code tren la: ";

    clock_t start1 = clock();
    for (int j = 0; j <n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            data[i][j] = 0;
        }
    }

    double t1 = (double)(clock() - start1)/CLOCKS_PER_SEC;

    cout << t1 << endl<<endl;

    cout << "TH2: Voi cach duyet hang truoc, cot sau \n" <<endl<<

         "for (i = 0; i <"<< n <<"; i++)\n"
         "for (j = 0; j <"<< n <<"; j++)\n"
         "data[i,j] = 0;\n";
    cout << "Thoi gian thuc thi doan code tren la: ";

    clock_t start2 = clock();
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            data[i][j] = 0;
        }
    }
    double t2 = (double)(clock() - start2)/CLOCKS_PER_SEC;
    cout<< t2 <<endl<<endl;

    cout << "TH2 nhanh gap TH1: " << t1/t2 <<endl<<endl;

    return 0;

}
