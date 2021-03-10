#include <iostream>

using namespace std;

/* Con tro chua khoi tao
int main (int argc, const char *argv[]) {
    int *pX;
    cout << px << endl << *pX << endl;
    *pX = 0;
    return 0;
} // use of undeclared identifier 'px'
*/

/* Truy nhap con tro NULL
int main (int argc, const char *argv[]) {
    int *pX = NULL;
    cout << pX << endl << *pX << endl;
    *pX = 0;
    return 0;
} // pX = 0x0, *pX Segmentation fault
*/

int* weird_sum(int a, int b) {
    int c;
    c = a + b;
    return &c;
}
int main (int argc, const char *argv[]) {
    int a = 8, b = 2;
    cout << weird_sum(a,b) << endl;
    return 0;
}
