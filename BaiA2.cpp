#include <iostream>

using namespace std;

int f (int arr[]) {
    size_t size = sizeof(arr);
    return size;
}

int main () {
    int arr[10];
    size_t size = sizeof(arr);
    cout << size << endl
         << f(arr) << endl;
    return 0;
}