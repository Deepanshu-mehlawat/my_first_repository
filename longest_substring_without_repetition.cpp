#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    string s;
    cout << "Enter any string: ";
    cin >> s;

    int maxLength = 0;
    vector<char> window;
    unordered_set<char> seen;

    for (char c : s) {
        if (seen.find(c) != seen.end()) {
            while (window.front() != c) {
                seen.erase(window.front());
                window.erase(window.begin());
            }
            seen.erase(window.front());
            window.erase(window.begin());
        }

        window.push_back(c);
        seen.insert(c);
        maxLength = max(maxLength, static_cast<int>(window.size()));
    }

    cout << maxLength << endl;

    return 0;
}
