#include <iostream>

using namespace std;

void count_even(int *ptr, int size) {
    int sumeven1 = 0, sumeven2 = 0;
    for (int i = 0; i < 5; i++) {
        if (*(ptr+i) % 2 == 0) sumeven1++;
    }
    for (int i = 5; i > 0; i--) {
        if (*(ptr-i) % 2 == 0) sumeven2++;
    }
    cout << sumeven1 << endl << sumeven2 << endl;
}

int main () {
    int arr[] = {0, 2, 5, 4, 6, 9, 14, 15};
    count_even(arr, 8);
    return 0;
}