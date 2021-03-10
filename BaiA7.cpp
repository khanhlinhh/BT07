#include <iostream>
#include <string.h>

using namespace std;

int main () {
    int count = 0;
    string s1, s2;
    cin >> s1 >> s2; 
    int l1 = s1.length(), l2 = s2.length();
    char c1[l1+1];
    strcpy(c1, s1.c_str());
    if (l1 > l2) { cout << count << endl; return 0;}
    else {
        for (int i = 0; i < l2; i++) {
            if (s1[0] == s2[i]) {
                if (i + l1 - 1 > l2) break;
                string ss = s2.substr(i, l1);
                char c2[l1+1];
                strcpy(c2, ss.c_str());
                if (strcmp(c1,c2) == 0) count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}