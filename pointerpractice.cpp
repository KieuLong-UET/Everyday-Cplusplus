#include <stdio.h>

using namespace std;

void update(int *a,int *b) {
    int sum = 0;
    int sub = 0;
    sum = *a + *b;
    sub = *a - *b;
    if (sub < 0) {
        sub *= -1;
    }    
    *a = sum;
    *b = sub;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
