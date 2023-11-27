#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
  
    int count = 0, sum = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1') {
            count++;
            if (count == 7)
                break;
        } else if (str[i] == '0') {
            count = 0;
        }
    }

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '0') {
            sum++;
            if (sum == 7)
                break;
        } else if (str[i] == '1') {
            sum = 0;
        }
    }

    if (sum == 7 || count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
