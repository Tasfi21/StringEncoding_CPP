#include <bits/stdc++.h>
using namespace std;

// Divide-and-conquer encoding
string encode(string &s, int start, int end) {
    if (start == end) {
        return string(1, s[start]);
    }

    int mid = (start + end) / 2;

    string left = encode(s, start, mid);
    string right = encode(s, mid + 1, end);

    return right + left;  // right first, then left (reverse order)
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    // Encode the string
    string encoded = encode(s, 0, s.size() - 1);

    cout << "Encoded string: " << encoded << endl;

    return 0;
}

