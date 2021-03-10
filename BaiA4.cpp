#include <iostream>

using namespace std;

bool search (int *ptr, int numb, int n) {
    for (int i = 0; i < n; i++) 
        for (int j = i + 1; j < n; j++) {
            if (*(ptr+i) < *(ptr+j)) {
                int k = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = k;
            }
        }
    while (true) {
        n/=2;
        if (numb == *(ptr+n)) {
            return true;
        }
    }
    return false;
}

int main () {
    int n, numb;
    cin >> n >> numb;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (search(arr, numb, n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}