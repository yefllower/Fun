#include <iostream>
#include <string>

using namespace std;

int main() {
    char ch;
    string output;
    string dict = "0oO";
    while (cin >> ch) {
        int tmp = -1;
        if (ch >= 'a' && ch <= 'z') 
            tmp = ch - 'a';
        if (ch >= 'A' && ch <= 'Z') 
            tmp = ch - 'A';
        if (ch == '!') break;
        if (tmp != -1) {
            output.push_back(dict[tmp / 9]);
            output.push_back(dict[tmp / 3 % 3]);
            output.push_back(dict[tmp % 3]);
        }
    }
    cout << output << endl;
    return 0;
}
