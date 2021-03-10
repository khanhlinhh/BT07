#include <iostream>

using namespace std;

char* weird_string() { 
   char c[] = "123345";
   return c; 
}

int main () {
    cout << &weird_string << endl;
    return 0;
}

// Output là: 1
// Bị cảnh báo "Address of stack memory associated with local variable 'c' returned"



