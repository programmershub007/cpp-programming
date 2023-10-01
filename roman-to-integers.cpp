#include <iostream>
#include <map>

using namespace std;

int romanToInt(string s) {
    map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int total = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i > 0 && roman[s[i]] > roman[s[i - 1]]) {
            total += roman[s[i]] - 2 * roman[s[i - 1]];
        } else {
            total += roman[s[i]];
        }
    }
    return total;
}

int main() {
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;
    cout << "The integer value is: " << romanToInt(roman) << endl;
    return 0;
}
