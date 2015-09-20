#include <iostream>
#include <string>

using namespace std;

int main() {
    char ch;
    string output;
    string dict = "0oO";
    bool encode = true;
    while (cin >> ch) {
        int tmp = -1;
        if (encode) {
            if (ch >= 'a' && ch <= 'z') 
                tmp = ch - 'a';
            if (ch >= 'A' && ch <= 'Z') 
                tmp = ch - 'A';
            if (ch == '?') encode = false;
            if (ch == '!') break;
            if (tmp != -1) {
                output.push_back(dict[tmp / 9]);
                output.push_back(dict[tmp / 3 % 3]);
                output.push_back(dict[tmp % 3]);
            }
        } else {
            static int buf = 0, cnt = 0;
            if (ch == '0') tmp = 0, cnt++;
            if (ch == 'o') tmp = 1, cnt++;
            if (ch == 'O') tmp = 2, cnt++;
            if (ch == '?') break;
            if (tmp != -1) {
                buf = buf * 3 + tmp;
                if (cnt == 3) {
                    output.push_back('a' + buf);
                    buf = 0;
                    cnt = 0;
                }
            }
        }
    }
    cout << output << endl;
    return 0;
}
